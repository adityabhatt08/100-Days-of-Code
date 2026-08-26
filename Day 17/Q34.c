//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main(){
    int n; //to store the number.
    int prime = 1; //value will be 1 for prime and 0 for composite.
    printf("Enter a natural number: ");
    scanf("%d",&n);
    if (n==1){
        printf("Neither prime nor composite.");
    } else if(n<1){
        printf("Not a natural number.");
    } else if(n>1){
        int i=2;
        while(i<n){
            if(n%i==0){
                prime = 0; //as the number is composite.
                i = n; //to end the loop on confirming composite number.
            } else{
                i++;
            }
        }
        if(prime)
            printf("Prime");
        else
            printf("Not prime");
    }
    return 0;
}