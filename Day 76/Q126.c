/*Q126: Ask the user for a filename.
Check if it exists by trying to open it in read mode.
If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/

#include <stdio.h>
#include <string.h>

int main(){
    char filename[50];
    printf("Enter filename: ");
    fgets(filename,50,stdin);
    filename[strcspn(filename,"\n")] = '\0';
    FILE * fp;
    fp = fopen(filename,"r");
    if(fp==NULL){
        printf("Error: File does not exist!\n");
        return 1;
    }
    printf("File opened successfully.\n");
    printf("Content of file:\n");
    char line[100];
    while(fgets(line,100,fp)!=NULL)
        printf("%s",line);
    fclose(fp);
    return 0;
}