/*Implement a function to calculate the average of a vector of floats. The function must 
**Obey the prototype:
**float media(float *vetor, int n);
*/

#include <stdio.h> 

float media(float *vetor, int n);

float media(float *vetor, int n){
    float a = 0;
    for (int i = 0; i < n; i++)
        a += vetor[i];
    return a/n;
}