/*Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/

#include <stdio.h>

enum alph
{
    A = 10, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z
};

int main(){
    enum alph i;
    char j;
    for(i = A, j = 'A'; i<=Z; i++,j++){
        printf("%c=%d\n",j,i);
    }
    return 0;
}