/*Q121: Write a C program that creates a text file named info.txt in write mode.
The program should take the user’s name and age as input, and write them to the file using fprintf().
After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>

int main(){
    FILE * fp;
    fp = fopen("info.txt","w");
    printf("File created successfully!\n");
    char name[50];
    int age;
    printf("Enter the name: ");
    fgets(name,50,stdin);
    printf("Enter the age: ");
    scanf("%d",&age);
    fprintf(fp,"Name: %sAge: %d\n",name,age);
    printf("Data was successfully saved.\n");
    fclose(fp);

    return 0;
}