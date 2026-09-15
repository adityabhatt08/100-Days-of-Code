/*Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int main(){
    int rows, columns;
    printf("Enter rows and columns: ");
    scanf("%d%d",&rows,&columns);
    int matrix[rows][columns];
    for(int i=0; i<rows; i++){
        printf("Row %d: ",i+1);
        for(int j=0; j<columns; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int transpose[columns][rows];
    for(int i=0; i<columns; i++){
        for(int j=0; j<rows; j++){
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("Transpose of the matrix:\n");
    for(int i=0; i<columns; i++){
        for(int j=0; j<rows; j++){
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}