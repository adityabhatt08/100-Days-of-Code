/*Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
    int marks;
};

int main(){
    struct Student students[5];
    for(int i=0; i<5; i++){
        printf("Enter the name, roll no. and marks of student %d: ",i+1);
        scanf("%19s %d %d",students[i].name,&students[i].roll,&students[i].marks);
    }
    printf("Name\tRoll\tMarks\n");
    for(int i=0; i<5; i++)
        printf("%s\t%d\t%d\n",students[i].name,students[i].roll,students[i].marks);
    return 0;
}