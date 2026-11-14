/*Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
    int marks;
};

int main(){
    printf("Enter the no. of students: ");
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i=0; i<n; i++){
        printf("Enter the name, roll no. and marks of student %d: ",i+1);
        scanf("%s %d %d",students[i].name,&students[i].roll,&students[i].marks);
    }
    int topper = 0;
    for(int i=1; i<n; i++)
        if(students[i].marks>students[topper].marks)
            topper = i;
    printf("Topper: %s (Marks: %d)\n",students[topper].name,students[topper].marks);
    return 0;
}