/*Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("\n");
    int array[size];
    for(int i=0; i<size; i++){
        printf("Enter array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("\n");
    int index;
    printf("Enter the index of element to be deleted: ");
    scanf("%d",&index);
    printf("\n");
    size--;
    for(int i = index; i<size; i++){
        array[i] = array[i+1];
    }
    printf("Updated array:\n");
    for(int i=0; i<size; i++)
        printf("%d\t",array[i]);
    return 0;
}