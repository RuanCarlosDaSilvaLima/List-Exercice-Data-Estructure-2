/*Implement a function to returns the sum of two arrays. This function should 
**Obey the prototype:
** int** add_array(int n, int m, int **array1, int **array2);
*/
#include<stdlib.h>

int** add_array(int n, int m, int **array1, int **array2);

int** add_array(int n, int m, int **array1, int **array2){
    int aux = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            aux += array1[i][j] + array2[i][j];
    return aux;
}