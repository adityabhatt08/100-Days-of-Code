#include <stdio.h>
#include <conio.h>

//Write a program to swap two numbers using a third variable.

void main(){
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("After swap: %d  %d",a,b);
}