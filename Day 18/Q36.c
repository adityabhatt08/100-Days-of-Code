//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main(){
    int a,b;
    int small,large; //to store the smaller and larger number.
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a>=b){
        large = a;
        small = b;
    } else if(a<b){
        large = b;
        small = a;
    }
    for(int i=small; i>=1; i--){
        if(small%i==0){
            if(large%i==0){
            printf("HCF = %d",i);
            i = 0; //to stop the loop.
            }
        }
    }

    return 0;
}