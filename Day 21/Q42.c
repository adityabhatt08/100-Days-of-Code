//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sumOfDivisors = 0;
    for(int i=1; i<num; i++){
        if(num%i==0)
            sumOfDivisors += i;
    }

    if(sumOfDivisors==num)
        printf("Perfect number");
    else
        printf("Not perfect number");
    return 0;
}