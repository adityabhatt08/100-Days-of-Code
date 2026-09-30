/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
This element is called the ceil of x.
If such an element does not exist, print -1.
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/

#include <stdio.h>

void fillArray(int *, int);
void printArray(int *, int);
void getSize(int *);
void getx(int *);
int findCeil(int *,int,int);

int main(){
    int size;
    getSize(&size);
    int arr[size];
    fillArray(arr, size);
    int x;
    getx(&x);
    int ceilIndex = findCeil(arr,size,x);
    printf("Index of ceil: %d",ceilIndex);

    return 0;
}

void fillArray(int *arr, int size){
    printf("Enter the elements of the sorted array: ");
    for(int i=0; i<size; i++){
        scanf("%d",arr+i);
    }
}

void printArray(int *arr, int size){
    printf("[");
    for(int i=0; i<size; i++){
        printf("%d, ",*(arr+i));
    }
    printf("\b\b]");
}

void getSize(int *addressSize){
    printf("Enter the size of array: ");
    scanf("%d",addressSize);
}

void getx(int *addressX){
    printf("Enter x: ");
    scanf("%d",addressX);
}

int findCeil(int *arr, int size, int x){
    for(int i=0; i<size; i++){
        if(arr[i]>=x){
            return i;
        }
    }
    return -1;
}