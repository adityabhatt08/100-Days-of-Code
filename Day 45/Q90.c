/*Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    for(int i=0; str[i]!='\n' && str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] += 32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }
    printf("%s",str);
    return 0;
}