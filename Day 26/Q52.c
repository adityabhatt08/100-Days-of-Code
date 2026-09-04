/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main(){
    for(int i=1; i<=5; i+=2){
        for(int j=1; j<=i; j++){
            printf("*\n");
        }
        printf("\n");
    }
    for(int i=3; i>=1; i-=2){
        for(int j=1; j<=i; j++){
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}