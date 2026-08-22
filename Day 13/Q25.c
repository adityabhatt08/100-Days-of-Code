#include <stdio.h>

//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

int main(){
    int a,b; //stores the numbers
    printf("Write the first number: ");
    scanf("%d",&a);
    char opr; //stores the operator
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Write the operator: ");
    scanf(" %c",&opr);
    switch(opr){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        case '%':
            printf("%d",a%b);
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}