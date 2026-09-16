/*Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2

1 2
3 4

2 2

5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main(){
    int rows, columns;
    printf("Enter rows and columns for the matrices: ");
    scanf("%d %d",&rows,&columns);
    int matrix1[rows][columns];
    int matrix2[rows][columns];
    printf("Matrix 1:\n");
    for(int i=0; i<rows; i++){
        printf("Row %d: ",i+1);
        for(int j=0; j<columns; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Matrix 2:\n");
    for(int i=0; i<rows; i++){
        printf("Row %d: ",i+1);
        for(int j=0; j<columns; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    int additionMatrix[rows][columns];
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            additionMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Matrix 1 + Matrix 2 =\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d\t",additionMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}