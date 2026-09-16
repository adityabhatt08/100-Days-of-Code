/*Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

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
    int symmetric = 1;
    if(rows == columns){
        for(int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){
                if(matrix[i][j] != matrix[j][i]){
                    symmetric = 0;
                    break;
            }
        }
    }
    }
    else
        symmetric = 0;
    if(symmetric)
        printf("True");
    else
        printf("False");
    return 0;
}