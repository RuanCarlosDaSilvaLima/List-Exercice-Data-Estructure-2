/*Implement a function to dynamically allocate a float vector with "n"
**positions initialized with "0.0". This function must obey the prototype:
**float *create_vetor(int n);
*/

#include <stdio.h>
#include <stdlib.h>

float *create_vetor(int n);

float *create_vetor(int n){
    float * aux = (float*)malloc(n*sizeof(float));
    return aux;
}