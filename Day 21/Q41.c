//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int original = a;
    int unit = a%10; //to store the unit place digit.
    int left; //to store the leftmost digit.
    while(a!=0){
        left = a%10;
        a = a/10;
    }
    a = original;
    int digit = 0; //to store the no. of digits.
    while(a!=0){
        digit++;
        a = a/10;
    }
    int temp = 1; //a temporary intermediate variable.
    int i = 1;
    while(i<digit){
        temp *= 10;
        i++;
    }
    a = original%(left*temp);
    a = unit*temp+a;
    a = a/10;
    a = a*10+left;

    printf("%d",a);
    return 0;
}