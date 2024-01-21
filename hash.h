/**
 * @file hash.h 
 * @brief hash library interface 
 * Explain the functions include in the library hash
*/

/* Dependencies */
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

/**
 * @brief Fill the given String until become multiple of 16. 
 * 
 * Get a String as a parameter and compute the remainder. case
 * the String isn't a multiple of 16, fill String until became 
 * a multiple of 16 with the value (16-remainder).
 * 
 * @param string A vector of char's finished in "\0".
 *   
 * @return The original vector filled.  
*/
char * step1 (char * string);

/**
 * 
 * @brief Generate a block of char with the magic vector and concat in the given String.
 *
 * Get a String and a magic vector as parameters. Use a specific algorithm to create a new 
 * vector with 16 char's. Concaternate the new block in the String.
 * 
 * @param string A vector of char's finished in "\0". must be multiple of 16. 
 * @param magic A vector of int's with numbers between 0-255, with no repetition.
 * 
 * @return The original vector with the new block concacat. 
*/
char * step2 (char * string, int * magic);

/**
 * 
 * @brief Generate a vector of 48 char's with a given String and magic vector.
 * 
 * Get a String as a parameter, it's size and a magic vector as parameters. Use a specific algorithm 
 * to create a new vector with 48 char's. 
 * 
 * @param string A vector of char's finished in "\0". must be multiple of 16.
 * @param len Length of string.
 * @param magic A vector of int's with numbers between 0-255, with no repetition. 
 * 
 * @return The 48 char's new vector 
 * */
char * step3 (char * string, int len, int * magic );

/**
 * 
 * @brief Take the first 16 bytes of a string and return as a new string.
 * 
 * Get a string as a parameter, must have 48 char's and create a new vector with 
 * the first 16 char's of string.
 * 
 * @param string A vector of char's finished in "\0". must have 48 char's.
 * 
 * @return The 16 char's new vector.
*/
char * step4 (char * string);

/**
 * 
 * @brief return the equivalent in hex of the given string.
 * 
 * Get a string as a parameter and create a 32 char's new vector 
 * with it's correspondent in hex value.
 *  
 * 
 * @param string A vector of char's finished in "\0". must have 16 char's.
 * 
 * @return 32 char's hexadecimal vector. 
*/
char * strhex (char * string);

/**
 * 
 * @brief Generate a magic vector. 
 * 
 * Get a seed as a parameter, and with an algorithm create a magic vector. 
 * the magic vector is a vector with number between 0-255, with no repetitions.
 *
 * @param seed A int number used to create the magic vector 
 * 
 * 
 * @return the magic vector  
*/
int * generate_magic (int seed);
