/*Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main(){
    int row1, column1;
    printf("Enter the no. of rows and columns in matrix1: ");
    scanf("%d %d",&row1, &column1);
    int row2, column2;
    printf("Enter the no. of rows and columns in matrix2: ");
    scanf("%d %d",&row2,&column2);
    if(column1==row2){
        int matrix1[row1][column1];
        int matrix2[row2][column2];
        int multiplication[row1][column2];
        printf("Matrix 1:\n");
        for(int i=0; i<row1; i++){
            printf("Row %d: ",i+1);
            for(int j=0; j<column1; j++){
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("Matrix 2:\n");
        for(int i=0; i<row2; i++){
            printf("Row %d: ",i+1);
            for(int j=0; j<column2; j++){
                scanf("%d",&matrix2[i][j]);
            }
        }
        for(int i=0; i<row1; i++){
            for(int j=0; j<column2; j++){
                multiplication[i][j] = 0;
                for(int k=0; k<column1; k++){
                multiplication[i][j] += matrix1[i][k]*matrix2[k][j];
                }
            }
        }
        printf("Matrix1 * Matrix2 :\n");
        for(int i=0; i<row1; i++){
            for(int j=0; j<column2; j++){
                printf("%d\t",multiplication[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Matrix1 * Matrix2 is not possible.");
    }
    return 0;
}