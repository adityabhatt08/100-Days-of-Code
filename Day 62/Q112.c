/*Q112: Write a program to take an integer array arr as input.
The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm.
Print the maximum sum as output.
If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>

int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array: ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    int currentSum = arr[0], maxSum = arr[0];
    for(int i=1; i<size; i++){
        currentSum = max(arr[i], currentSum+arr[i]);
        if (currentSum>maxSum)
            maxSum = currentSum;
    }
    printf("Maximum Sum: %d",maxSum);
    return 0;
}