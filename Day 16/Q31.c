//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main(){
    int n; //stores the number.
    printf("Enter a number: ");
    scanf("%d",&n);
    //we are going to calculate binary value by using loops.
    int i = 1; //to store the place.
    int bin = 0; //to store the binary value.
    while(n != 0){
        bin = bin + (n%2)*i;
        i = i*10;
        n = n/2;
    }
    printf("Binary Representation: %d",bin);
    return 0;
}