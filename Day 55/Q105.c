/*Q105: Write a program to take an integer array nums of size n, and print the majority element.
The majority element is the element that appears strictly more than ⌊n / 2⌋ times.
Print -1 if no such element exists.
Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/

#include <stdio.h>

void findCount(int * num, int * count, int size){
    for(int i=0; i<size; i++){
        count[i] = 0;
        for(int j=0; j<size; j++)
            if(num[i]==num[j])
                count[i]++;
    }
}

int findMajority(int * num, int * count, int size){
    for(int i=0; i<size; i++)
        if(count[i]>(size/2))
            return num[i];
    return -1;
}

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int num[size];
    printf("Enter the elements of array: ");
    for(int i=0; i<size; i++)
        scanf("%d",&num[i]);
    int count[size];
    findCount(num,count,size);
    int majority = findMajority(num, count, size);
    printf("Majority Element : %d",majority);
    return 0;
}