/*Q128: Read a text file and count how many vowels and consonants are in the file.
Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>
#include <ctype.h>

int main(){
    FILE * fp;
    fp = fopen("text.txt","r");
    if(fp==NULL){
        printf("Unable to open file!");
        return 1;
    }
    int vow = 0, cons = 0;
    int c;
    while((c=fgetc(fp))!=EOF){
        c = toupper(c);
        if(c>='A' && c<='Z'){
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
                vow++;
            else
                cons++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\nConsonants: %d",vow,cons);
    return 0;
}