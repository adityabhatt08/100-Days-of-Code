/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main(){
    char date[20];
    printf("Enter the date in dd/04/yyyy format: ");
    scanf("%s",date);
    for(int i=11; i>1; i--){
        date[i] = date[i-1];
    }
    char replace[] = "-Apr-";
    for(int i=2, j=0; j<=4; j++, i++){
        date[i] = replace[j];
    }
    printf("%s",date);
    return 0;
}