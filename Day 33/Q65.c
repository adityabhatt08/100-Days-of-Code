/*Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("\n");
    int array[size];
    for(int i=0; i<size; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\n");
    int search;
    printf("Enter a number to search: ");
    scanf("%d",&search);
    printf("\n");
    int low = 0, high = size-1, mid, index = -1;
    while(low<=high){
        mid = (low+high)/2;
        if(array[mid]==search){
            index = mid;
            break;
        }
        else if(array[mid]>search)
            high = mid-1;
        else if(array[mid]<search)
            low = mid+1;
    }
    printf("Found at index %d",index);
    
    return 0;
}