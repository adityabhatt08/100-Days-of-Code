/*Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    int search;
    printf("Search for an element: ");
    scanf("%d",&search);
    int index = -1;
    for(int i=0; i<size; i++){
        if(search == array[i]){
            index = i;
            break;
        }
    }
    printf("Found at index %d",index);
    return 0;
}