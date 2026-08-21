#include <stdio.h>

//Q23: Write a program to calculate library fine based on late days as follows: 
/* First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

int main(){
    printf("Enter the late days: ");
    int late; //stores the late days
    scanf("%d",&late);
    int fine;
    if(late>=1 && late<=5){
        fine = 2*late;
    } else if(late>5 && late<=10){
        fine = (late-5)*4+10;
    } else if(late>10 && late<=30){
        fine = (late-10)*6+30;
    }
    if(late>=1 && late<=30){
        printf("Fine Rs %d",fine);
    } else if(late>30){
        printf("Membership Cancelled");
    } else {
        printf("Invalid Input");
    }
    printf("\nPress ENTER to exit.");
    getchar();
    getchar();
    return 0;
}