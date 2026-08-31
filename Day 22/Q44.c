//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 2.6

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main(){
    int n;
    printf("This program prints the sum of series:\n");
    printf("1 + 3/4 + 5/6 + 7/8 + ... upto n terms\n");
    printf("Enter n: ");
    scanf("%d",&n);
    float sum = 1;
    for(float i = 1.0; i<n; i++)
        sum += (2*i+1)/(2*i+2);
    printf("Approximate sum: %.1f",sum);
    return 0;
}