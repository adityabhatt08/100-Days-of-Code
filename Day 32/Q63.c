/*Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main(){
    int size1;
    printf("Enter the size of first array: ");
    scanf("%d",&size1);
    int myArray1[size1];
    for(int i=0; i<size1; i++){
        printf("Enter element %d of first array: ",i+1);
        scanf("%d",&myArray1[i]);
    }
    printf("\n");
    int size2;
    printf("Enter the size of second array: ");
    scanf("%d",&size2);
    int myArray2[size2];
    for(int i=0; i<size2; i++){
        printf("Enter element %d of second array: ",i+1);
        scanf("%d",&myArray2[i]);
    }
    printf("\n");
    int mergeArray[size1+size2];
    int i;
    for(i=0; i<size1; i++){
        mergeArray[i] = myArray1[i];
    }
    for(; i<size1+size2; i++){
        mergeArray[i] = myArray2[i-size1];
    }
    printf("Merged Array:\n");
    for(int i=0; i<size1+size2; i++){
        printf("%d\t",mergeArray[i]);
    }
    return 0;
}