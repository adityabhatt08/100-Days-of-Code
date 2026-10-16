/*Q114: Write a program to take a string s as input.
The task is to find the length of the longest substring without repeating characters.
Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    printf("Enter a string: ");
    fgets(s,50,stdin);
    int length = strlen(s)-1;
    int count = 0;
    int i=0;
    int start = 0;
    int longest = 0;
    for(int i=0; i<length; i++){
        int j;
        for(j=i-1; j>=start; j--){
            if(s[j]==s[i]){
                if(count>longest){
                    longest = count;
                }
                start = i;
                count = 0;
                break;
            }
        }
        count++;
    }
    printf("Length of longest substring: %d\n",longest);
    return 0;
}