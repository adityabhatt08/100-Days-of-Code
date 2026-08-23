#include <stdio.h>

//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

int main(){
    int i = 0;
    int n, sum = 0;
    printf("This Program prints the sum of first n odd number.\n");
    printf("Enter n = ");
    scanf("%d",&n);
    while(i<n){
        sum = sum + 2*i + 1;
        i++;
    }
    printf("The Sum of first %d odd numbers is: %d",n,sum);
    return 0;
}