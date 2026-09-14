/*Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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
    printf("Matrix is:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++)
            printf("%d\t",matrix[i][j]);
        printf("\n");
    }
    return 0;
}