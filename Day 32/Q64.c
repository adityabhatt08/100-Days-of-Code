/*Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int num1 = num;
    int no_of_digits = 0;
    while(num != 0){
        no_of_digits++;
        num /= 10;
    }
    num = num1;
    int digits[no_of_digits];
    for(int i=0; i<no_of_digits; i++){
        digits[i] = num%10;
        num = num/10;
    }
    int count[10];
    for(int i=0; i<10; i++)
        count[i] = 0;
    for(int i=0; i<no_of_digits; i++){
        count[digits[i]]++;
    }
    int most = 0;
    for(int i=0; i<10; i++){
        if(count[i]>count[most])
            most = i;
    }
    printf("Most occuring digit is: %d",most);
    return 0;
}