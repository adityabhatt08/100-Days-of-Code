/*Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
    int distinct = 1;
    for(int i=0; i<order; i++){
        for(int j=i+1; j<order; j++){
            if(matrix[i][i] == matrix[j][j]){
                distinct = 0;
                break;
            }
        }
    }
    if(distinct)
        printf("True");
    else
        printf("False");
    return 0;
}