/*Implement a function to dynamically allocate an array of floats with "n"
**rows and "m" columns initialized with "0.0". This function must obey the prototype:
**float **create_matriz(int n, int m);
*/

#include <stdlib.h>

float **create_matriz(int n, int m);


float **create_matriz(int n, int m){
    float ** aux = (float**)malloc(n*sizeof(float*));
    for (int i = 0; i < n; i++){
        aux[i] = (float*)malloc(m*sizeof(float));
    }

    return aux;
}