#include <stdio.h>

//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

int main(){
    int cp, sp;
    printf("Enter the cost price: ");
    scanf("%d",&cp);
    printf("Enter the selling price: ");
    scanf("%d",&sp);
    if(sp>cp){
        int profit = sp-cp;
        int profitPercentage = profit*100/cp;
        printf("Profit %d%%",profitPercentage);
    } else if(sp<cp){
        int loss = cp-sp;
        int lossPercentage = loss*100/cp;
        printf("Loss %d%%",lossPercentage);
    } else if(sp==cp){
        printf("No Profit No Loss");
    }
    return 0;
}