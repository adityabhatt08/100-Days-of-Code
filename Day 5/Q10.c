#include <stdio.h>
#include <conio.h>

////Write a program to input time in seconds and convert it to hours:minutes:seconds format.

void main(){
    int seconds;
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    int hours = seconds/3600;
    seconds = seconds%3600;
    int minutes = seconds/60;
    seconds = seconds%60;
    printf("%d:%d:%d",hours,minutes,seconds);

}