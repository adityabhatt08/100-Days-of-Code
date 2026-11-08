/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum roles{
    ADMIN,
    USER,
    GUEST
};

int main(){
    printf("Enter your role (Admin, User or Guest): ");
    char role[6];
    scanf("%s",role);
    int l = strlen(role);
    for(int i=0; i<l; i++)
        role[i] = tolower(role[i]);
    if(strcmp(role,"admin")==0 || strcmp(role,"user")==0 || strcmp(role,"guest")==0){
        role[0] = toupper(role[0]);
        printf("Welcome %s!\n",role);
    }
    else
        printf("Invalid input!\n");
    return 0;
}