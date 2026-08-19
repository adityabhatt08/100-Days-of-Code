#include <stdio.h>
#include <conio.h>

//Write a program to convert temperature from Celsius to Fahrenheit.

void main(){
    int celsius;
    printf("Enter the temperature in degree celsius: ");
    scanf("%d",&celsius);
    printf("Fahrenheit = %d",celsius*9/5+32);
}