/*Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    int count = 0; //no. of characters in string.
    for(; str[count]!='\0' && str[count]!='\n'; count++);
    for(int i=0; i<count/2; i++){
        int j = count - i - 1;
        str[i] = str[i] + str[j];
        str[j] = str[i] - str[j];
        str[i] = str[i] - str[j];
    }
    printf("%s",str);
    return 0;
}