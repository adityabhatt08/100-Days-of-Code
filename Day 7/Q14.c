#include <stdio.h>

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
    if(a>=65&&a<=90){
        a = a+32;
    }
    if(a>=97&&a<=122){
        if(a==97||a==101||a==105||a==111||a==117){
            printf("Vowel");
        } else{
            printf("Consonant");
        }
    } else{
        printf("Not an alphabet");
    }
}