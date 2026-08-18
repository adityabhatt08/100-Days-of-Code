#include <stdio.h>

//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
/* 90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

void main(){
    int percentage;
    printf("Enter the percentage: ");
    scanf("%d",&percentage);
    if(percentage>=90 && percentage<=100){
        printf("Grade A");
    } else if(percentage>=80 && percentage<=89){
        printf("Grade B");
    } else if(percentage>=70 && percentage<=79){
        printf("Grade C");
    } else if(percentage>=60 && percentage<=69){
        printf("Grade D");
    } else if(percentage>=0 && percentage<60){
        printf("Grade F");
    } else{
        printf("Percentage is out of range");
    }
}