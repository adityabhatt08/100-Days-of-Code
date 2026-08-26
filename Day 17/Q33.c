//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main(){
    int n; //to store the number and later manipulate.
    int original; //to store original number.
    printf("Enter a number: ");
    scanf("%d",&n);
    original = n;
    int i=0; //to store the number of digits.
    while(n!=0){
        i++;
        n = n/10;
    } //we used this loop to calculate no. of digits.
    n = original; //we have to run the loop again so we reset the value of n.
    int digit; //to store the digit.
    int powofdigit; //to store digit^i.
    int arm = 0; //to store the armstrong sum.
    while(n!=0){
        digit = n%10;
        powofdigit = digit;
        for(int a=1;a<i;a++){
            powofdigit = powofdigit*digit;
        } //we run this loop to get digit^i. pow() function doesn't work properly here so we used for loop instead.
        arm = arm + powofdigit; 
        n = n/10;
    }
    if(arm==original){
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }
    return 0;
}