//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int original = num;
    int sumFactorial = 0;
    while(num!=0){
        int i=1;
        int factorial = 1;
        while(i<=(num%10)){
            factorial = factorial*i;
            i++;
        }
        sumFactorial = sumFactorial+factorial;
        num = num/10;
    }
    if(sumFactorial == original)
        printf("Strong number");
    else 
        printf("Not strong number");
    return 0;
}