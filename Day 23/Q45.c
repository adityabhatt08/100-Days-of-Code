//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>

int main(){
    float a = 2.00, b = 3.00;
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    float sum = 0.00;
    for(int i = 0; i<n; i++){
        sum = sum + a/b;
        a += 2;
        b += 4;
    }
    printf("2/3 + 4/7 + 6/11 + 8/15 + ... upto n terms = %.2f",sum);
    return 0;
}