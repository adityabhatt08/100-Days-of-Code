/*Q119: Write a program to take an integer array as input.
Only one element will be repeated. Print the repeated element.
Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main(){
    int size;
    printf("Enter the no. of elements in the array: ");
    scanf("%d",&size);
    int nums1[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
        scanf("%d",&nums1[i]);
    for(int i=0; i<size-1; i++)
        if(nums1[i]==nums1[i+1]){
            printf("Repeating element : %d\n",nums1[i]);
            break;
        }
    return 0;
}