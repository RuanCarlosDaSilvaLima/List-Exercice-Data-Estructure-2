/*Implement a RECURSIVE function to print a string on the screen. This function 
**must obey the prototype:
**void print(char *string);
*/

#include<stdlib.h>

void print(char *string);

void print(char *string){
    if (string == '\0'){
        printf("%c",string[0]);
        print(string[1]);
    }
}