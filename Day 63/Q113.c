/*Q113: Write a program to take an integer array arr and an integer k as inputs.
The task is to find the kth smallest element in the array.
Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>

void takeArray(int arr[], int size){
    printf("Enter the elements of array: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
}

void sortArray(int arr[], int size){
    for(int i=0; i<size; i++){
        int index = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        if(i!=index){
        arr[i] = arr[i] + arr[index];
        arr[index] = arr[i] - arr[index];
        arr[i] = arr[i] - arr[index];
        }
    }
}

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    takeArray(arr,size);
    sortArray(arr, size);
    int k;
    printf("Enter k: ");
    scanf("%d",&k);
    printf("kth smallest element: %d\n",arr[k-1]);
    return 0;
}