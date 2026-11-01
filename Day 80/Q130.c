/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf().
Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>
#include <string.h>

int main(){
    FILE * fp;
    fp = fopen("students.txt","a");
    int rows;
    printf("Enter the number of rows to be added to the file: ");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++){
        char name[20];
        int roll, marks;
        printf("Enter name, roll no. and marks for row %d: ",i);
        scanf("%s %d %d",name,&roll,&marks);
        fprintf(fp,"%s %d %d\n",name,roll,marks);
    }
    fclose(fp);
    fp = fopen("students.txt","r");
    if(fp==NULL){
        printf("File not found!");
        return 1;
    }
    char name[20];
    int roll, marks;
    while(fscanf(fp,"%s %d %d",name,&roll,&marks)==3)
        printf("Name: %s | Roll: %d | Marks: %d\n",name,roll,marks);
    fclose(fp);
    return 0;
}