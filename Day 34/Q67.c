/*Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array[size+1];
    printf("\n");
    for(int i=0; i<size; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\n");
    int index;
    printf("Enter the index at which, you want to insert new element: ");
    scanf("%d",&index);
    printf("\n");
    int element;
    printf("Enter the element to be inserted: ");
    scanf("%d",&element);
    for(int i=size; i>index; i--){
        array[i] = array[i-1];
    }
    array[index] = element;
    printf("\n");
    printf("Updated Array:\n");
    for(int i=0; i<=size; i++){
        printf("%d\t",array[i]);
    }
    return 0;
}