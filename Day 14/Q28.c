#include <stdio.h>

//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

int main(){
    int i = 2, n, product = 1;
    printf("This program prints the product of even numbers from 2 to n.\n");
    printf("Enter n = ");
    scanf("%d",&n);
    while(i<=n){
        product = product*i;
        i += 2;
    }
    if(n>=2){
        printf("The product of even numbers from 2 to %d is: %d",n,product);
    }

    return 0;
}