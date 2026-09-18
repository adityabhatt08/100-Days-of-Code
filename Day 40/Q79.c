/*Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main(){
    int rows, columns;
    printf("Enter the no. of rows and columns: ");
    scanf("%d %d",&rows,&columns);
    int matrix[rows][columns];
    for(int i=0; i<rows; i++){
        printf("Row %d: ",i+1);
        for(int j=0; j<columns; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int traversal[rows*columns];
    int sum;
    int index = 0;
    for(sum=0; sum<=rows+columns-2; sum++){
        if(sum%2==0){
            for(int i=sum<rows-1?sum:rows-1; i>=0; i--){
                for(int j=0; j<=(sum<columns-1?sum:columns-1); j++){
                    if(i+j==sum){
                        traversal[index] = matrix[i][j];
                        index++;
                    }
                }
            }
        }
        else{
            for(int i=0; i<=(sum<rows-1?sum:rows-1);i++){
                for(int j=sum<columns-1?sum:columns-1; j>=0; j--){
                    if(i+j==sum){
                        traversal[index] = matrix[i][j];
                        index++;
                    }
                }
            }
        }
    }
    printf("Diagonal Traversal:\n");
    for(int i=0; i<rows*columns; i++){
        printf("%d\t",traversal[i]);
    }
    return 0;
}