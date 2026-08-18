#include <stdio.h>

//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

void main(){
    int a,b,c,d;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    if(a>=b && a>=c){
        d = a; //d will be the largest number.
    } else if(b>=a && b>=c){
        d = b;
    } else if(c>=a && c>=b){
        d = c;
    }
    printf("Largest is %d",d);
}