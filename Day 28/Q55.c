/*
Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>

int main(){
    int n;
    int prime = 1; //stores if number is prime or not.
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=2; i<=n; i++){
        for(int j=2; j<i; j++){
            if(i%j==0){
                prime = 0;
                break;
            }
        }
        if(prime){
            printf("%d ",i);
        }
        else{
            prime = 1;
        }
    }
    return 0;
}