#include <stdio.h>
#include <conio.h>

//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

void main(){
    int breadth, length, area, perimeter;
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&breadth);
    printf("Enter the length of rectangle: ");
    scanf("%d",&length);
    area = breadth*length;
    perimeter = 2*(breadth+length);
    printf("Area = %d, Perimeter = %d",area,perimeter);
}