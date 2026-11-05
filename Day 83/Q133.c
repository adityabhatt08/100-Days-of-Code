/*Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>

enum months
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main(){
    enum months x;
    printf("Enter the month number: ");
    scanf("%d",&x);
    if(x==JAN || x==MAR || x==MAY || x==JUL || x==AUG || x==OCT || x==DEC)
        printf("31 days\n");
    else if(x==APR || x==JUN || x==SEP || x==NOV)
        printf("30 days\n");
    else if(x==FEB)
        printf("28 or 29 days\n");
    else
        printf("Invalid input\n");
    return 0;
}