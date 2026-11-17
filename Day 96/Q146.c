/*Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>

struct Date
{
    int d, m, y;
};

struct Employee
{
    char name[20];
    int id;
    struct Date joining;
};

int main(){
    struct Employee e;
    printf("Enter the name, id and joining date of the employee: ");
    scanf("%s %d %d %d %d",e.name,&e.id,&e.joining.d,&e.joining.m,&e.joining.y);
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",e.name,e.id,e.joining.d,e.joining.m,e.joining.y);
    return 0;
}