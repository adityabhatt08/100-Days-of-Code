/*Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    char repeat = 0;
    for(int i=0; str[i]!='\n' && str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            for(int j=i+1; str[j]!='\n' && str[j]!='\0'; j++){
                if(str[j]==str[i]){
                    repeat = str[i];
                    break;
                }
            }
            if(repeat==str[i]){
                break;
            }
        }
    }
    printf("%c",repeat);
    return 0;
}