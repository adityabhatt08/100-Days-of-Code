/*Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    for(int i=0; str[i]!='\0' && str[i]!='\n'; i++){
        if(str[i]==32){
            str[i] = '-';
        }
    }
    printf("%s",str);
    return 0;
}