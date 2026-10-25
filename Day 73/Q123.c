/*Q123: Read a text file and count the total number of characters, words, and lines.
A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 33
Words: 6
Lines: 2

*/

#include <stdio.h>
#include <string.h>

int main(){
    FILE * fp;
    fp = fopen("sample.txt","r");
    int characters = 0, words = 0, lines = 0;
    char str[100];
    while(fgets(str,100,fp)!=NULL){
        lines++;
        characters += strlen(str);
        int i=0;
        while(str[i]!='\n' && str[i]!='\0'){
            if(str[i]!=' ' && (str[i+1]==' ' || str[i+1]=='\n' || str[i+1]=='\0'))
                words++;
            i++;
        }
    }
    fclose(fp);
    printf("Character: %d\nWords: %d\nLines: %d\n",characters,words,lines);
    return 0;
}