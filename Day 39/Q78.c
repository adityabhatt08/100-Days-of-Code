/*Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main(){
    int order;
    printf("Enter the order of square matrix: ");
    scanf("%d",&order);
    int matrix[order][order];
    for(int i=0; i<order; i++){
        printf("Row %d: ",i+1);
        for(int j=0; j<order; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int sum = 0;
    for(int i=0; i<order; i++){
        sum += matrix[i][i];
    }
    printf("Sum = %d",sum);
    return 0;
}