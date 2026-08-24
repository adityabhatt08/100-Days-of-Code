#include <stdio.h>

//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

int main(){
    int n; //stores the number
    int factorial=1; //stores the factorial
    printf("This program prints the factorial of a number.\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        factorial = factorial*i;
        i++;
    }
    if(n>=0){
        printf("%d! = %d",n,factorial);
    } else{
        printf("%d! is undefined.",n);
    }
    return 0;
}