//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main(){
    int n; //stores the number.
    printf("Enter a number: ");
    scanf("%d",&n);
    int original = n; //to keep track of original number.
    int reverse = 0; //stores the reversed number.
    while(n != 0){
        reverse = 10*reverse + n%10;
        n = n/10;
    }
    if(original == reverse)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}