/*Q124: Take two filenames from the user – a source file and a destination file.
Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main(){
    FILE *fp1, *fp2;
    fp1 = fopen("source.txt","r");
    fp2 = fopen("destination.txt","w");
    int c;
    while((c = fgetc(fp1))!=EOF)
        fputc(c,fp2);
    fclose(fp1);
    fclose(fp2);
    printf("File copied successfully to destination.txt\n");
    return 0;
}