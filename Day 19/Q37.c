//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main(){
    int a,b; //to store the values.
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    int large,small; //to store the larger and smaller number respectively.
    if(a>=b){
        large = a;
        small = b;
    } else if(a<b){
        large = b;
        small = a;
    }
    int i = large;
    int lcm;
    while(i<=large*small){
        if(i%large==0 && i%small==0){
            printf("LCM = %d",i);
            i = large*small+1; //to end loop at this point.
        } else{
            i++;
        }
    }
    return 0;
}