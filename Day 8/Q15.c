#include <stdio.h>

//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

void main(){
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if(a>=65 && a<=90){
        printf("Uppercase alphabet"); //as ASCII values of uppercase alphabets range from 65 to 90.
    } else if(a>=97 && a<=122){
        printf("Lowercase alphabet");
    } else if(a>=48 && a<=57){
        printf("Digit");
    } else if(a>=32 && a<=47 || a>=58 && a<=64 || a>=91 && a<=96 || a>=123 && a<=126){
        printf("Special character");
    }
}