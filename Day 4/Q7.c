#include <stdio.h>
#include <conio.h>

//Write a program to swap two numbers without using a third variable.

void main(){
    int a,b;
    printf("Enter the numbers, seperated by a space: ");
    scanf("%d %d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swap: %d  %d",a,b);
}