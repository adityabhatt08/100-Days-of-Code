#include <stdio.h>

//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
/* First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

int main(){
    int units, bill;
    printf("Enter the units consumed: ");
    scanf("%d",&units);
    if(units>=0 && units<=100){
        bill = 5*units;
    } else if(units>100 && units<=200){
        bill = (units-100)*7+500;
    } else if(units>200 && units<=300){
        bill = (units-200)*10+1200;
    } else if(units>300){
        bill = (units-300)*12+2200;
    }
    if(units>=0){
        printf("Bill: Rs %d",bill);
    } else{
        printf("Invalid Input");
    }
    printf("\nPress Enter to exit.");
    getchar();
    getchar();
    return 0;
}