/*Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    int i=0, j=size-1;
    while(i<size/2){
        array[i] = array[i] + array[i+j];
        array[i+j] = array[i] - array[i+j];
        array[i] = array[i] - array[i+j]; //swapping both elements.
        i++;
        j-=2;
    }
    printf("Reversed array:\n");
    for(int i=0; i<size; i++){
        printf("%d\t",array[i]);
    }
    return 0;
}