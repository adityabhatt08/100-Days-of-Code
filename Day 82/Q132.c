/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <ctype.h>

enum traffic
{
    RED = 'R',
    YELLOW = 'Y',
    GREEN = 'G'
};

int main(){
    enum traffic light;
    printf("Enter the traffic light ('R' for Red, 'Y' for Yellow and 'G' for Green): ");
    scanf("%c",&light);
    light = toupper(light);
    switch(light){
        case RED : printf("Stop\n"); break;
        case YELLOW : printf("Wait\n"); break;
        case GREEN : printf("Go\n"); break;
        default : printf("Invalid input\n");
    }
    return 0;
}