/***********************************************************************************************************
* AUTHOR:
* Za0warudo, Vinicius Gomes
* 
* EMAIL:
* viniciusgomes24@usp.br 
*
* DESCRIPTION: 
* Implementation of a dinamic lib with with entropy shannon calculator
  based in EP3 from Técnicas de Programação from IME-USP 
*
************************************************************************************************************/
// STANDART LIBS //    
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <math.h>

// FUNCTIONS DECLARATIONS //
long double shannon (char *, int);

long double shannon (char * string, int base){
    // Declarations // 
    char key[256];
    int len;
    long double probability, divider, dividend, sum;
    // It's total cases in the formula probability = (good cases / total cases) //
    len = strlen(string); 

    for (int i = 0; i < 256; i++) key[i] = 0; // i=0 -> "a", i=1 -> "b" and so on  

    for (int i = 0; i < len; i++) key[(int)string[i]] += 1; // Use ascii value to compute 

    sum = 0;
    dividend = log10(base); // Use property logb(a) = log10(a)/log10(b) 
    for (int i = 0 ; i < 256; i++ ) {
        if (key[i] > 0){
            // It's total cases in the formula probability = (good cases / total cases) // 
            probability = (long double) key[i]/len;
            divider = log10l(probability);
            sum -= (long double) probability * ( divider/dividend);
        }
    }

    return sum;
}