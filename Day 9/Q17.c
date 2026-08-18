#include <stdio.h>
#include <math.h>

//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

void main(){
    int a,b,c;
    printf("Write the coefficient of x*x: ");
    scanf("%d",&a);
    printf("Write the coefficient of x: ");
    scanf("%d",&b);
    printf("Write the constant term: ");
    scanf("%d",&c);
    int x1, x2; //solutions of the quadratic equation
    int d; //discriminant
    d = b*b - 4*a*c;
    if (d>0){
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("Roots are real and different: %d, %d",x1,x2);
    } else if (d==0){
        x1 = -b/(2*a);
        x2 = x1; //both roots are same
        printf("Roots are real and same: %d",x1);
    } else if (d<0){
        printf("Roots are complex");
    }
}