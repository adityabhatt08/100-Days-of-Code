/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *fp1, *fp2;
    fp1 = fopen("input.txt","r");
    fp2 = fopen("output.txt","w");
    int c;
    while((c=fgetc(fp1))!=EOF)
        fprintf(fp2,"%c",toupper(c));
    fclose(fp1);
    fclose(fp2);
    return 0;
}