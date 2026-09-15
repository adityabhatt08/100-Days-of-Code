/*Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main(){
    int rows, columns;
    printf("No. of rows and no. of columns = ");
    scanf("%d %d",&rows,&columns);
    int matrix[rows][columns];
    for(int i=0; i<rows; i++){
        printf("Row %d: ",i+1);
        for(int j=0; j<columns; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int arrayOfSum[rows];
    for(int i=0; i<rows; i++){
        arrayOfSum[i] = 0;
        for(int j=0; j<columns; j++){
            arrayOfSum[i] += matrix[i][j];
        }
    }
    printf("Array:\n");
    for(int i=0; i<rows; i++){
        printf("%d\t",arrayOfSum[i]);
    }
    return 0;
}