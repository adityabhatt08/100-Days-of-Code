/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

/*
Note: This is a better approach.
Time complexity is O(log n) here.
*/

/*
Instead of applying loops, we can calculate the pivot mathematically:
Let us assume x exists for input n.
So we have:
1+2+...+x = x+(x+1)+...+n

LHS = x(x+1)/2

RHS is an Arithmetic Progression.
No. of terms in RHS = n-x+1.
So, RHS = (n-x+1)(x+n)/2

LHS = RHS
or x(x+1)/2 = (n-x+1)(x+n)/2
or x^2 + x = (n-x+1)(n+x)
or x^2 + x = (n-x)(n+x) + 1.(n+x)
or x^2 + x = n^2 - x^2 + n + x
or x^2 + x + x^2 - x = n^2 + n
or 2.x^2 = n(n+1)
or x^2 = n(n+1)/2.

Thus x exists if n(n+1)/2 is a perfect square.

Let us implement the code.
*/

#include <stdio.h>

int findPivot(int n){
    int sum = n*(n+1)/2;
    for(int x=0; x<=n; x++)
        if(x*x == sum)
            return x;
    return -1;
}

int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Pivot Integer:\n");
    printf("%d\n",findPivot(n));
    return 0;
}