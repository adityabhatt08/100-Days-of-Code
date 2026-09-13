/*Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++){
        printf("Enter the element at index [%d]: ",i);
        scanf("%d",&array[i]);
    }
    int k;
    printf("Enter k: ");
    scanf("%d",&k);
    k = size!=0?k%size:k;
    int array1[size+k];
    for(int i=0; i<size; i++)
        array1[i] = array[i];
    for(int i=size-1; i>=0; i--)
        array1[i+k] = array1[i];
    for(int i=0, j=size; j<size+k; i++, j++)
        array1[i] = array1[j];
    for(int i=0; i<size; i++)
        array[i] = array1[i];
    printf("Rotated array:\n");
    for(int i=0; i<size; i++)
        printf("%d\t",array[i]);
    return 0;
}