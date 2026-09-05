/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main(){
    for(int i=1; i<=7; i+=2){
        for(int j=1; j<=(7-i)/2; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=5; i>=1; i-=2){
        for(int j=1; j<=(7-i)/2; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}