/*Q129: A file numbers.txt contains a list of integers separated by spaces.
Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/

#include <stdio.h>

int main(){
    FILE * fp;
    fp = fopen("numbers.txt","r");
    if(fp==NULL){
        printf("Couldn't open the file!");
        return 1;
    }
    int count = 0; //count the numbers
    char nums[100];
    fgets(nums,sizeof(nums),fp);
    fclose(fp);
    for(int i=0; nums[i]!='\0'; i++)
        if(nums[i]!=' ' && (nums[i+1]==' ' || nums[i+1]=='\0'))
            count++;
    if (count==0){
        printf("Couldn't read the integers!\n");
        return 2;
    }
    fp = fopen("numbers.txt","r");
    int sum = 0;
    int a;
    for(int i=1; i<=count; i++){
        fscanf(fp,"%d",&a);
        sum += a;
    }
    fclose(fp);
    float avg = (float)sum/count;
    printf("Sum = %d\nAverage = %.2f\n",sum,avg);
    return 0;
}