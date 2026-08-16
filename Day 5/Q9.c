#include <stdio.h>
#include <conio.h>
#include <math.h>

//Write a program to calculate simple and compound interest for given principal, rate, and time.

void main(){
    int p,r,t;
    float si,ci,power;
    printf("Enter principal amount: ");
    scanf("%d",&p);
    printf("Enter the %% annual rate: ");
    scanf("%d",&r);
    printf("Enter the time in years: ");
    scanf("%d",&t);
    si = p*r*t/100;
    power = pow(1+r/100.00,t);
    ci = p*power-p;
    printf("Simple Interest = %.2f, Compound Interest = %.2f",si,ci);
}