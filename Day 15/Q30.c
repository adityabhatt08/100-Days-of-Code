#include <stdio.h>

//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

int main(){
    printf("This program reverse the digits of a given number.\n");
    int original, n, reverse=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    original = n;
    int digit;
    while(n != 0){
        digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }
    if(original>=0){
        printf("The reverse of %d is: %d",original,reverse);
    } else{
        printf("Enter a non-negative number!!!");
    }
    return 0;
}