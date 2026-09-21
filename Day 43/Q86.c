/*Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    int count = 0;
    int palindrome = 1;
    for(; str[count]!='\0' && str[count]!='\n'; count++);
    for(int i=0; i<count/2; i++){
        if(str[i]!=str[count-i-1]){
            palindrome = 0;
            break;
        }
    }
    if(palindrome){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
}