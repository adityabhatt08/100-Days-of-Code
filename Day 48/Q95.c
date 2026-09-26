/*Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[50];
    char str2[50];
    printf("Enter the first string: ");
    fgets(str1,50,stdin);
    printf("Enter the second string: ");
    fgets(str2,50,stdin);
    int rot = 1;
    int i, j;
    for(i=0; str1[i]!='\n'; i++){
        if(str1[i]==str2[0]){
            break;
        }
    }
    for(j=0; str2[j]!='\n'; i++, j++){
        if(str1[i]!=str2[j]){
            rot = 0;
            break;
        }
        if(str1[i+1]=='\n'){
            i=-1;
        }
    }
    if(strlen(str1)==strlen(str2)){
        if(rot){
            printf("Rotation");
        }
        else{
            printf("Not rotation");
        }
    }
    else{
        printf("Not rotation");
    }

    return 0;
}