/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum choices
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main(){
    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\nSelect an operation: ");
    char choice[15];
    scanf("%s",choice);
    int opr;
    if(strcmp(choice,"ADD")==0 || strcmp(choice,"1")==0)
        opr = ADD;
    else if(strcmp(choice,"SUBTRACT")==0 || strcmp(choice,"2")==0)
        opr = SUBTRACT;
    else if(strcmp(choice,"MULTIPLY")==0 || strcmp(choice,"3")==0)
        opr = MULTIPLY;
    else{
        printf("Invalid input!");
        return 1;
    }
    printf("Enter any two numbers: ");
    int a,b;
    scanf("%d %d",&a,&b);
    int c;
    switch(opr){
        case ADD: c = a+b; break;
        case SUBTRACT: c = a-b; break;
        case MULTIPLY: c = a*b;
    }
    printf("Result = %d\n",c);
    return 0;
}