#include <stdio.h>
#include <conio.h>

//Write a program to input two numbers and display their sum, difference, product, and quotient.

void main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Sum = %d, Diff = %d, Product = %d, Quotient = %d",a+b,a-b,a*b,a/b);
}