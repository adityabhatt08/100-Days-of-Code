/*
Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int myArray[size];
    for(int i=0; i<size; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&myArray[i]);
    }
    int max = myArray[0];
    int min = myArray[0];
    for(int i=1; i<size; i++){
        if(myArray[i]>max)
            max = myArray[i];
        if(myArray[i]<min)
            min = myArray[i];
    }
    printf("Max = %d, Min = %d",max,min);
    return 0;
}