/*Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum colors{
    RED,
    YELLOW,
    GREEN
};

int main(){
    char * str[] = {"RED","YELLOW","GREEN"};
    for(int i=RED; i<=GREEN; i++)
        printf("%s = %d\n",str[i],i);
    return 0;
}