/*Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/

#include <stdio.h>

void printNewArray(int * arr, int size){
    int arr1[size];
    for(int i=0; i<size; i++){
        arr1[i] = -1;
        for(int j=i+1; j<size; j++){
            if(arr[j]>arr[i]){
                arr1[i] = arr[j];
                break;
            }
        }
        printf("%d, ",arr1[i]);
    }
    printf("\b\b ");
}

int main(){
    int size;
    printf("Enter the no. of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printNewArray(arr,size);
    return 0;
}