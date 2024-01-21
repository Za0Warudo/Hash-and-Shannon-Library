/**
 * @file shannon.h 
 * @brief shannon library interface 
 * Explain the functions include in the library shannon.
*/

/* Dependencies */
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <math.h>

/**
 * @brief Compute the shannon entropy of the given string.
 * 
 * Get a string and a base for the logarithm as parameters.
 * Calculate the shannon entropy of the given string with the using 
 * the base given in the logarithms.
 * 
 * @param string A vector of char's finished in "\0".
 * 
 * @param base A int value for the base of logarithm.
 * 
 * @return the shannon entropy of the given string in the given base
 * 
*/
long double shannon (char *string, int base);

