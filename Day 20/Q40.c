//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main(){
    int n, original; //to store the binary number.
    int i; //to store the bits.
    int one = 0; //to store one's complement.
    printf("Enter a binary number: ");
    scanf("%d",&n);
    printf("Kindly enter the bits: ");
    scanf("%d",&i);
    original = n;
    //now we are going to reverse the number:
    int reverse = 0;
    int j = 0;
    while(j<i){
        reverse = 10*reverse + n%10;
        n = n/10;
        j++;
    }
    n = original;
    j = 0;
    printf("One's Complement: ");
    while(j<i){
        if(reverse%10==0)
            printf("1");
        else if(reverse%10==1)
            printf("0");
        reverse /= 10;
        j++;
    }
    return 0;
}