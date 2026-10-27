/*Q125: Open an existing file in append mode and allow the user to enter a new line of text.
Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>
#include <string.h>

int main(){
    FILE * fp;
    fp = fopen("data.txt","a");
    if(fp==NULL){
        printf("Couldn't open file!\n");
        return 1;
    }
    char str[100];
    printf("Enter the text to append: ");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")] = '\0';
    fprintf(fp,"%s",str);
    printf("File updated successfully with appended text.\n");
    fclose(fp);
    return 0;
}