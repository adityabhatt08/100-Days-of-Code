/*Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
    int marks;
};

struct Student top(struct Student [],int);

int main(){
    printf("Enter the no. of students: ");
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i=0; i<n; i++){
        printf("Enter the name, roll no. and marks of student %d: ",i+1);
        scanf("%19s %d %d",students[i].name,&students[i].roll,&students[i].marks);
    }
    struct Student topper = top(students,n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n",topper.name,topper.roll,topper.marks);
    return 0;
}

struct Student top(struct Student students[],int n){
    int max = 0;
    for(int i = 1; i<n; i++)
        if(students[i].marks>students[max].marks)
            max = i;
    return students[max];
}