/*Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++){
        printf("Enter element at index [%d]: ",i);
        scanf("%d",&array[i]);
    }
    int largest = array[0], smallest = array[0];
    for(int i=1; i<size; i++){
        if(array[i]>largest)
            largest = array[i];
        if(array[i]<smallest)
            smallest = array[i];
    }
    for(int i=0; i<size; i++){
        if(array[i] == largest)
            array[i] = smallest;
    }
    largest = array[0];
    for(int i=0; i<size; i++){
        if(array[i]>largest)
            largest = array[i];
    }
    printf("Second largest element: %d",largest);
    return 0;
}