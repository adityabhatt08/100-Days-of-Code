/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>

enum opr
{
    SUCCESS = 1,
    FAILURE = 0,
    TIMEOUT = -1
};

int main(){
    enum opr state;
    printf("Success = 1\nFailure = 0\nTimeout = -1\nEnter input: ");
    scanf("%d",&state);
    switch(state){
        case SUCCESS : printf("Operation successful\n"); break;
        case FAILURE : printf("Operation failed\n"); break;
        case TIMEOUT : printf("Operation timed out\n"); break;
        default : printf("Invalid input\n");
    }
    return 0;
}