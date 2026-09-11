/*Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("\n");
    int array[size+1];
    for(int i=0; i<size; i++){
        printf("Enter Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\n");
    int insert;
    printf("Insert an Element: ");
    scanf("%d",&insert);
    printf("\n");
    int index = size;
    for(int i=0; i<size; i++){
        if(array[i]>=insert){
            index = i;
            break;
        }
    }
    for(int i=size-1; i>=index; i--)
        array[i+1] = array[i];
    array[index] = insert;
    printf("New Array:\n");
    for(int i=0; i<size+1; i++)
        printf("%d\t",array[i]);
    return 0;
}