/*Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>
#include <string.h>

void upperCase(char * x){
    if(*x>='a' && *x<='z')
        *x -= ('a'-'A');
}

int main(){
    char str[100];
    printf("Enter a sentence: ");
    fgets(str,100,stdin);
    upperCase(&str[0]);
    for(int i=1; i<strlen(str)-1; i++)
        if(str[i-1]==' ')
            upperCase(&str[i]);
    printf("%s",str);
    return 0;
}