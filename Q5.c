/* Implement a function that takes a string as a parameter and replaces all 
**occurrences of uppercase to lowercase characters. This function must obey the 
**prototype:
**void Tiny(char * str);
*/

void Tiny(char * str);


void Tiny(char * str){
    for (int i = 0; str != '\0'; i++)
        if (str <= 'A' || str >= 'Z')
            str[i] += 'Z' - 'A';
}