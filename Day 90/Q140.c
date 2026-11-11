/*Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum genders{
    MALE,
    FEMALE,
    OTHER
};

struct person{
    enum genders g;
};

int main(){
    struct person p1;
    printf("Enter the gender of person (MALE, FEMALE or OTHER): ");
    char gender[7];
    scanf("%6s",gender);
    if(strcmp(gender,"MALE")==0)
        p1.g = MALE;
    else if(strcmp(gender,"FEMALE")==0)
        p1.g = FEMALE;
    else if(strcmp(gender,"OTHER")==0)
        p1.g = OTHER;
    else{
        printf("Invalid input!\n");
        return 1;
    }
    switch(p1.g){
        case MALE : printf("Male"); break;
        case FEMALE : printf("Female"); break;
        case OTHER : printf("Other");
    }
    return 0;
}
