/*Implement a function to count the length of a string. This function should 
**Obey the prototype:
** int length(char *string);
*/

#include<stdlib.h>

int length(char *string);

int length(char *string){
    int aux = 0;
    for ( ; string[aux] != '/0' ; aux++);
    return aux;
}