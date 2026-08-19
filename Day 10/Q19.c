#include <stdio.h>

//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

int main(){
    int a,b,c;
    printf("Enter the length of sides of triangle: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b && a==c){
        printf("Equilateral");
    } else if(a==b || a==c || b==c){
        printf("Isosceles");
    } else if(a!=b && a!=c && b!=c){
        printf("Scalene");
    }
    return 0;
}