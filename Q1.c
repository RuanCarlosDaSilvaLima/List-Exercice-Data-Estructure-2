/* Implement a function that returns an approximation of the value of pi according to Leibniz's formula. 
**This function must obey the following prototype, where n indicates the number of terms that should be used to evaluate the value of π.
** double pi (int n);
*/

#include <stdio.h>
#include <math.h>

double pi (int n){
    float pi = 0;
    for (int i = 0; i <= n; i++){
        pi +=  pow(-1, i)/(2*i)+1;
    }
    return pi*4;
}