/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase).
The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies.
Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int main(){
    char s[50], t[50];
    printf("Enter string s: ");
    fgets(s,50,stdin);
    printf("Enter string t: ");
    fgets(t,50,stdin);
    int ls = strlen(s)-1;
    int lt = strlen(t)-1;
    int i;
    if(ls==lt){
        for(i=0; i<ls; i++){
            int j;
            for(j=0; j<lt; j++){
                if(s[i]==t[j]){
                    t[j] = 0;
                    break;
                }
            }
            if(j==lt){
                printf("Not Anagram\n");
                break;
            }
        }
        if(i==ls){
            printf("Anagram\n");
        }
    }
    else{
        printf("Not Anagram (lengths not equal).\n");
    }
    return 0;
}