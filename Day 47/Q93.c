/*Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

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
    int anagram = 0;
    if(strlen(str1)==strlen(str2)){
        for(int i=0; str1[i]!='\0'; i++){
            for(int j=0; str2[j]!='\0'; j++){
                if(str1[i]==str2[j]){
                    anagram++;
                    break;
                }
            }
        }
        if(anagram == strlen(str1)){
            printf("Anagrams");
        }
        else{
            printf("Not anagrams");
        }
    }
    else{
        printf("Not anagrams");
    }

    return 0;
}