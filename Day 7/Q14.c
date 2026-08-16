#include <stdio.h>
#include <ctype.h>

//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

void main(){
    char a;
    printf("Enter an alphabet: ");
    scanf("%c",&a);
    a = tolower(a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        printf("Vowel");
    } else{
        printf("Consonant");
    }
}