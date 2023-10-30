/*Implement a function to return an array populated with an integer value
**passed as a parameter. This function must obey the prototype:
**int **array(int n, int m, int valor);
*/

#include <stdlib.h>

int **array(int n, int m, int valor);


int **array(int n, int m, int valor){
    int** array = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++)
        array[i] = (int*)malloc(m*sizeof(int));        
        
    for (int i = 0; i < n; i++)
        for (int i = 0; i < m; i++)
            array[n][m] = valor;
        
    return array;
}