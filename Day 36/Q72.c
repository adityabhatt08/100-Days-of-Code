/*Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main(){
    int rows, columns;
    printf("Enter no. of rows in matrix: ");
    scanf("%d",&rows);
    printf("Enter no. of columns in matrix: ");
    scanf("%d",&columns);
    int matrix[rows][columns];
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    int sum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++)
            sum = sum + matrix[i][j];
    }
    printf("Sum = %d",sum);
    return 0;
}