/*Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str,100,stdin);
    for(int a=0; str[a]!='\0'; a++){
        if(str[a]=='\n'){
            printf("Empty sentence");
            return 0;
        }
        if(str[a]!=' '){
            break;
        }
    }
    int space = 0; //count no. of spaces.
    int i;
    for(i=0; str[i]==' ';i++); //to ensure sentence don't start with space.
    for(int j=i; str[j]!='\n'; j++){
        if(str[j]==' ' && str[j+1]!=' ' &&str[j+1]!='\n'){ //to avoid duplicate spaces, and the spaces at the end of sentence.
            space++;
        }
    }
    int words[space+1][2];
    words[0][0] = i;
    for(int j=i, k=1, l=0; str[j]!='\n'; j++){
        if(j>i && str[j]!=' ' && str[j-1]==' '){
            words[k][0] = j; 
            k++;
        }
        if(str[j]!=' ' && (str[j+1]==' ' || str[j+1]=='\n')){
            words[l][1] = j;
            l++;
        }
    }
    int j = 0, k=0;
    for(; j<=space; j++, k++){
        int l = words[j][0], m = words[k][1];
        for(;l!=m && l<=((l+m)/2); l++, m--){
            str[l] = str[l]+str[m];
            str[m] = str[l] - str[m];
            str[l] = str[l] - str[m];
        }
    }
    printf("%s",str);

    return 0;
}