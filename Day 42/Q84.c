/*Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    for(int i=0; str[i]!='\0' && str[i]!='\n'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }
    printf("%s",str);
    return 0;
}