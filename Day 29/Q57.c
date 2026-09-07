/*
Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

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
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + myArray[i];
    }
    printf("Sum = %d",sum);
    return 0;
}