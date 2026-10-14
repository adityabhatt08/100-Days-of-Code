/*Q111: Write a program to take an integer array arr and an integer k as inputs.
The task is to find the first negative integer in each subarray of size k moving from left to right.
If no negative exists in a window, print "0" for that window.
Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

#include <stdio.h>

void enterSize(int * size){
    printf("Enter the size of array: ");
    scanf("%d",size);
}

void fillArray(int arr[],int size){
    printf("Enter the elements of array: ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
}

void printNeg(int arr[], int size, int k){
    int size1 = size-k+1;
    int arr1[size1];
    for(int i=0; i<size1; i++){
        arr1[i] = 0;
        for(int j=i; j<i+k; j++)
            if(arr[j]<0){
                arr1[i] = arr[j];
                break;
            }
        printf("%d ",arr1[i]);
    }
    printf("\n");
}

int main(){
    int size;
    enterSize(&size);
    int arr[size];
    fillArray(arr,size);
    int k;
    printf("Enter k: ");
    scanf("%d",&k);
    printNeg(arr, size, k);
    return 0;
}