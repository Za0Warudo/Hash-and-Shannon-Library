/***********************************************************************************************************
* AUTHOR:
* Za0warudo, Vinicius Gomes
* 
* EMAIL:
* viniciusgomes24@usp.br 
*
* DESCRIPTION: 
* Implementation of a simples test of libs shannon and hash, based in EP3 from 
* Técnicas de Programação from IME-USP 
*
************************************************************************************************************/

/**
 * @file test.c 
 * @brief Explain test 
 * 
 * Generate a random string based in the seed given as input. 
 * Then Generate a magic vector with the same seed 
 * and compute the hash correspondent to initial string and the shannon
 * entropy of hash. Finally print all results.
*/

// STANDART LIBS //
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <time.h>
#include "shannon.h"
#include "hash.h"

// FUNCTIONS DECLARATIONS //

/**
 * @brief Generate a random String. 
 * 
 * Generate a random String with the maximum size of 10000. 
 * Also the String only have upper and lower alphabet letters.
 * 
 * @param seed A integer value 
 *   
 * @return A random string .  
*/

char * strgen(int);

/**
 * @brief Do the Test. 
 * 
 * Execute the test 
 *  
 * @param seed A integer value 
 *     
*/
void test(int);

/**
 * @brief Execute a test.
 * 
 * Execute a test with a given seed read in stdin.
 * 
 * @return case sucess return 0
 *     
*/

int main (int argc, char *argv[]){
    int seed;
    if (argc != 2) {
        printf("ERROR: use %s <seed>\n", argv[0]);
        return 1;
    }
    seed = atoi(argv[1]);
    test(seed);
    return 0;
}

char * strgen (int seed) {
    // Declarations // 
    char * str;
    int len, value;

    srand(seed);

    len = rand() % 1000; // Generate a random len between 0-1000

    str = malloc(len*sizeof(char)); // Allocate memory for str 

    value = 0; 
    for (int i = 0; i < len; i++) {
            seed = rand();
            srand(seed);
            value = rand() % 256;
        // It's generate strings only with uppper and lower alphabet letters //        
        while ((value < 65) || (value > 90 && value < 97) || (value > 122)){
            seed = rand();
            srand(seed);
            value = rand() % 256;
        }
        str[i] = value;  
    }

    return str;
}


void test (int seed) {
    char * str;
    char * aux;
    char * strbegin;
    int * magic;
    int len;
    clock_t beginT, endT;    

    // Call generate magic and str with the seed given // 
    beginT = clock();
    magic = generate_magic(seed);
    endT= clock();
    printf("\nTime to generate magic vector: %f\n\n", (double) (endT - beginT) / CLOCKS_PER_SEC);

    beginT = clock();
    strbegin = strgen(seed);
    endT= clock();
    printf("Time to generate string: %f\n\n", (double) (endT - beginT) / CLOCKS_PER_SEC );

    // Call steps //
    beginT = clock();
    str = step1(strbegin);
    endT= clock();
    printf("Time to step1: %f\n\n", (double) (endT - beginT) / CLOCKS_PER_SEC );
    len = strlen(str); 

    beginT = clock();
    aux = step2(str, magic);
    endT= clock();
    printf("Time to step2: %f\n\n", (double) (endT - beginT) / CLOCKS_PER_SEC );

    free(str);
    str = aux; 
    len += 16;

    beginT = clock();
    aux = step3(str, len, magic);
    endT= clock();
    printf("Time to step3: %f\n\n", (double) (endT - beginT) / CLOCKS_PER_SEC );

    len = 48;
    free(str);
    str = aux;

    beginT = clock();
    aux = step4(str);
    endT= clock();
    printf("Time to step4: %f\n\n", (double) (endT - beginT) / CLOCKS_PER_SEC );


    free(str);
    str = aux; 

    beginT = clock();
    aux = strhex(str);
    endT= clock();
    printf("Time to step4: %f\n\n", (double) (endT - beginT) / CLOCKS_PER_SEC );


    free (str);
    str = aux;

    beginT = clock();
    long double shan = shannon(str,2);
    endT= clock();
    printf("Time to shannon: %f\n", (double) (endT - beginT) / CLOCKS_PER_SEC );

    // Print hash // 
    
    printf ("\nString generate:\n%s\n", strbegin); 
    printf ("\nCorrespondent Hash:\n%s\n", str);
    printf ("\nShannon Entropy of Hash:\n%Lf\n", shan);    
    
    free(strbegin);
    free(str);
    free(magic);
}