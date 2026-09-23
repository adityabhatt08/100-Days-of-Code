/*Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main(){
    char a[50];
    printf("Enter a string : ");
    fgets(a,50,stdin);
    char b;
    printf("Enter a character: ");
    scanf("%c",&b);
    int frequency = 0;
    for(int i=0; a[i]!='\n' && a[i]!='\0'; i++){
        if(a[i] == b){
            frequency++;
        }
    }
    printf("Frequency = %d",frequency);
    return 0;
}