/***********************************************************************************************************
* AUTHOR:
* Za0warudo, Vinicius Gomes
* 
* EMAIL:
* viniciusgomes24@usp.br 
*
* DESCRIPTION: 
* Implementation of a static lib with hash functions, based in EP3 from Técnicas de Programação from IME-USP 
* the functions are explain in the hash.h file.
************************************************************************************************************/

// STANDART LIBS //    
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

// FUNCTIONS DECLARATIONS // 
char * step1 (char *); 

char * step2 (char *, int *);

char * step3 (char *, int , int *);

char * step4 (char *);

char * strhex (char *);

char digithex (char);

int * generate_magic (int);

int ismagic (int *);

// CODE //

char * step1 (char * string){

    // Declarations // 
    int len, remainder; 
    char * str;

    // Prepare Variables //

    len = strlen(string); 
    
    remainder = len % 16;

    str = malloc((len+(16-remainder))*sizeof(char)); // Allocate memory

    // Verify if must be filled //
    if (remainder != 0 ){   
        // Must be filled // 
     
        int value = 16 - remainder; // Compute value for fill   
        
        for (int i = value-1; i >= 0 ; i--) str[len+i] = value; // Fill  
    }

    for (int i = 0; i < len; i ++) str[i] = string[i]; // Copy string to str

    return str; // Sucess
}


char * step2 (char * string, int * magic){

    // Verify if parameters are correct // 

    if ( (strlen(string)%16) != 0 ) return NULL; // Wrong string size, Failure

    if ( ismagic(magic) != 0 ) return NULL; // Vector not magic, Failure   

    // Declarations // 
    int value, len, multiple;
    unsigned char block[16];
    char * str;
    
    // Prepare Varibles and vectors // 
    
    value = 0;  

    for (int i = 0; i < 16; i++) block[i] = 0; // Fill vector with zeros  
    
    len = strlen(string); 
    
    str = malloc((len+16)*sizeof(char)); // Allocate memory 

    multiple = len / 16; 

    // Algorithm // 
    for (int i = 0; i < multiple; i++ ){
        for (int j = 0; j < 16; j++ ){
            value = magic[string[ i*16 + j ] ^ value ] ^ block[j];
            block[j] = value;  
        }
    }
 
    for (int i = 0; i < len; i++) str[i] = string[i]; // Copy string to str 

    for (int i = 0; i < 16; i++) str[i+len] = block[i]; // Concat new block 

    return str; // sucess
}


char * step3(char * string, int len, int * magic){
    
    // Verify if parameters are correct // 

    if ( len%16 != 0 ) return NULL; // Wrong string size, Failure

    if ( ismagic(magic) != 0 ) return NULL; // Vector not magic, Failure 

    // Declarations // 
    int multiple, i, j, k; 
    unsigned char temp;
    char * hash;

    hash = malloc(48*sizeof(char)); // Allocate memory 

    multiple = (len /16);

    // Algorithm // 
    for (i = 0; i < multiple; i++){
        for (j = 0; j < 16; j++){
            hash[16+j] = string[i*16+j];
            hash[32+j] = (hash[16+j] ^ hash[j]);
        }
        temp = 0;
        for (j = 0; j < 18; j++){
            for (k = 0; k < 48; k++){
                temp = (hash[k] ^ magic[temp]);
                hash[k] = temp;
            }
            temp = (temp+j)%256;
        } 
    }

    return hash; // Sucess
}

char * step4(char * string){

    // Verify if parameters are correct // 
    // For some reason the algorithm in some cases give a zero before the 49 byte 
    // so the verification is not really clear //  

    // if ( strlen(string) != 48 ) return NULL; // Wrong string size, Failure


    // Declarations // 
    char * hash;
    
    // Allocations // 

    hash = malloc(16*sizeof(char)); 
    
    for(int i = 0; i < 16; i++) *(hash+i) = *(string+i); 
 
    return hash; // Sucess 
}

char * strhex (char * hash){

    // Verify if parameters are correct // 
    // For some reason the algorithm in some cases give a zero before the 49 byte 
    // so the verification is not really clear //  

    // if ( strlen(hash) != 16 ) return NULL; // Wrong string size, Failure

    // Declarations // 
    unsigned char digit;
    char * hash_in_hex;

    hash_in_hex = malloc(32*sizeof(char));
    for (int i = 0; i < 16; i++){
        // Converts first digit // 
        digit = (unsigned char) *(hash+i)/16; 
        hash_in_hex[2*i] = digithex(digit);
        // Converts second digit //
        digit = (unsigned char) *(hash+i)%16; 
        hash_in_hex[(2*i)+1] = digithex(digit);
    }

    return hash_in_hex;
}

char digithex (char digit){

    if (digit < 10) return (digit+48); // between "0"-"9"
    else return (digit+87); // between "a"-"f"
}

// GENERATE MAGIC VECTOR // 
int * generate_magic (int seed){    
    // Declarations //
    int random, swap, aux;
    int * magic;

    magic = malloc(256*sizeof(int)); // Alloccate memory 
    
    for (int i = 0; i < 256; i++) magic[i] = i; // Fill Magic    
    
    // Permute Magic //
    for (int i = 0; i < 1024; i++){
        /************************************************* 
        * Use seed to generate a random int and a new seed         
        * Then aply some swaps 
        *************************************************/
        srand(seed);
        random = rand();
        swap = random % 256; 
        aux = magic[i%256];
        magic[i%256] = magic[swap];
        magic[swap] = aux;
        seed = random; 
    }

    return magic;
} 

int ismagic (int * magic){

    int key[256]; // Store repetitions of numbers between 0 and 255 

    for (int i = 0; i < 256; i++) key[i] = 0; // Fill with zeros 

    for (int i = 0; i < 256; i++){
        if (magic[i] >= 0 && magic[i] < 256) key[magic[i]] += 1; // Inc key value
        else return 1; // Number not satisfy (0 <= N < 256), Failure
    }   

    for (int i = 0; i < 256; i++){
        if (key[i] != 1) return 2; // Repetitions or lack of a number 
    }

    return 0;        
}