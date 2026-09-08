/*Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

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
    int positve = 0, negative = 0, zero = 0;
    for(int i=0; i<size; i++){
        if(array[i]>0)
            positve++;
        else if(array[i]<0)
            negative++;
        else if(array[i]==0)
            zero++;
    }
    printf("Positive = %d, Negative = %d, Zero = %d",positve,negative,zero);
    return 0;
}