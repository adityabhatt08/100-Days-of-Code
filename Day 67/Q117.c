/*Q117: Write a program to take two sorted arrays of size m and n as input.
Merge both the arrays such that the merged array is also sorted.
Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int fillArray(int arr[], int size){
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
        if(i!=0 && arr[i]<arr[i-1]){
            printf("Sorted arrays allowed only!\n");
            return 1;
        }
    }
    return 0;
}

int main(){
    int m,n;
    printf("Enter the no. of elements in array 1: ");
    scanf("%d",&m);
    int arr1[m];
    printf("Enter the elements of array 1: ");
    if(fillArray(arr1,m))
        return 1;
    printf("Enter the no. of elements in array 2: ");
    scanf("%d",&n);
    int arr2[n];
    printf("Enter the elements of array 2: ");
    if(fillArray(arr2,n))
        return 1;
    int arr3[m+n];
    int i,j,k;
    for(i=0, j=0, k=0; i<m && j<n; k++){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
        }
    }
    for(;i<m;i++,k++)
        arr3[k] = arr1[i];
    for(;j<n;j++,k++)
        arr3[k] = arr2[j];
    printf("Merged array: ");
    for(k=0; k<m+n; k++){
        printf("%d ",arr3[k]);
    }
    printf("\n");
    return 0;
}