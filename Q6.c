/*Implement a function that takes a string as a parameter and replaces all 
**letters by their successors in the alphabet. For example, 
**the string "Home" would be changed to "Ipnf". 
**This function must obey the prototype:
**void shift_string(char *str);
*/

void shift_string(char *str);

void shift_string(char *str){
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] != 'Z' || str[i] != 'z')
            str[i]++; 
}