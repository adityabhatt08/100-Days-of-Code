/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h>

struct Student
{
    char name[20];
    int roll_no;
    int marks;
};

int main(){
    struct Student student1;
    printf("Enter the name, roll no. and marks of student 1: ");
    scanf("%19s %d %d",student1.name,&student1.roll_no,&student1.marks);
    printf("Name: %s | Roll: %d | Marks: %d\n",student1.name,student1.roll_no,student1.marks);
    return 0;
}