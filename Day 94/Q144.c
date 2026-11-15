/*Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
    int marks;
};

void printStruct(struct Student);

int main(){
    printf("Enter the name, roll no. and marks of student: ");
    struct Student s;
    scanf("%s %d %d",s.name,&s.roll,&s.marks);
    printStruct(s);
    return 0;
}

void printStruct(struct Student s){
    printf("Name: %s | Roll: %d | Marks: %d\n",s.name,s.roll,s.marks);
}