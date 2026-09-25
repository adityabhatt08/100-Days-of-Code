/*Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a sentence: ");
    fgets(str,100,stdin);
    int space = 0; //to count no. of spaces in sentence
    for(int i=0; str[i]!='\0' && str[i]!='\n'; i++){
        if(str[i]==' ' && str[i+1]!= ' '){
            space++;
        }
    }
    int words[space+1];
    int j;
    for(j=0; str[j]==' ';j++); //in case sentence starts with space(s).
    words[0] = j;
    int index = 1;
    for(int k=j; str[k]!='\0' && str[k]!='\n'; k++){
        if(str[k]==' ' && str[k+1]!=' ' && str[k+1]!='\n' && str[k+1]!='\0'){
            words[index] = k+1;
            index++;
        }
    }
    int length[space+1]; //to store length of words
    for(int i=0; i<=space; i++){
        length[i] = 0;
        for(int k = words[i]; str[k]!=' ' && str[k]!='\n' && str[k]!='\0';k++){
            length[i]++;
        }
    }
    int longest = 0;
    for(int i=0; i<=space; i++){
        if(length[i]>length[longest]){
            longest = i;
        }
    }
    char longstr[100];
    int l = 0;
    for(int i=words[longest]; str[i]!=' ' && str[i]!='\n' && str[i]!='\0';i++,l++){
        longstr[l] = str[i];
    }
    longstr[l] = 0;
    printf("Longest word: %s",longstr);
    
    return 0;
}