/*Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    for(int i=0; str[i] != '\0' && str[i] != '\n'; i++){
        printf("%c\n",str[i]);
    }
    return 0;
}