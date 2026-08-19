#include <stdio.h>
#include <conio.h>

//Write a program to find and display the sum of the first n natural numbers.

void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Sum = %d",n*(n+1)/2);

}