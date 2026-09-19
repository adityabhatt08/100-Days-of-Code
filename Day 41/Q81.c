/*Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    int count = 0; //because fgets() stores newline ('\n') too.
    while(str[count]!='\0' && str[count]!='\n'){
        count++;
    }
    printf("No. of characters = %d",count);
    return 0;
}