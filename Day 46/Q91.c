/*Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    int j = 0;
    for(int i=0; str[i]!='\n' && str[i]!='\0'; i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!= 'A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    printf("%s",str);
    return 0;
}