#include <stdio.h>
#include <conio.h>

//Write a program to calculate the area and circumference of a circle given its radius.

void main(){
    int radius;
    printf("Enter the radius of circle: ");
    scanf("%d",&radius);
    printf("Area = %.2f, Circumference = %.2f",3.141592*radius*radius,2*3.14*radius);
}
