/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

void enterSize(int * size){
    printf("Enter the size of array: ");
    scanf("%d",size);
}

void fillArray(int arr[],int size){
    printf("Enter the elements of array: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
}

void sortArray(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[i]){
                arr[j] = arr[j]+arr[i];
                arr[i] = arr[j]-arr[i];
                arr[j] = arr[j]-arr[i];
            }
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int size;
    enterSize(&size);
    int arr[size];
    fillArray(arr,size);
    sortArray(arr,size);
    int k;
    printf("Enter k: ");
    scanf("%d",&k);
    int max = 0;
    for(int i=0; i<k; i++){
        max = max + arr[size-i-1];
    }
    printf("Maximum Sum = %d\n",max);
    return 0;
}