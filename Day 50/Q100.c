/*Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    scanf("%s",str);
    for(int i=0; str[i]!='\0'; i++){
        for(int j=i; str[j]!=0; j++){
            for(int k=i; k<=j; k++){
                printf("%c",str[k]);
            }
            printf(",");
        }
    }
    printf("\b "); //To remove the final comma.
    return 0;
}