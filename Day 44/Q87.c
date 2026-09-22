/*Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    int space = 0, digit = 0, special = 0;
    for(int i=0; str[i] != '\0' && str[i] != '\n'; i++){
        if(str[i] == 32){
            space++;
        }
        if(str[i]>=48 && str[i]<=57){
            digit++;
        }
        if(str[i]>=33 && str[i]<=47 || str[i]>=58 && str[i]<=64 || str[i]>=90 && str[i]<=96 || str[i]>=123 && str[i]<=126){
            special++;
        }
    }
    printf("Spaces = %d, Digits = %d, Special = %d",space,digit,special);
    return 0;
}