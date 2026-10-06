/*Q108: Write a Program to take an integer array nums.
Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>

void printAnswer(int nums[], int size){
    int answer[size];
    printf("[");
    for(int i=0; i<size; i++){
        answer[i] = 1;
        for(int j=0; j<size; j++){
            if(i!=j){
                answer[i] = answer[i]*nums[j];
            }
        }
        printf("%d,",answer[i]);
    }
    printf("\b]");
}

int main(){
    int size;
    printf("Enter the no. of elements in the array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter the elements of array: ");
    for(int i=0; i<size; i++){
        scanf("%d",&nums[i]);
    }
    printAnswer(nums,size);
    return 0;
}