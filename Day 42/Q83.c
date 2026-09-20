/*Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    int vowel = 0, consonant = 0;
    for(int i=0; str[i]!='\0' && str[i]!='\n'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i] == 'O' || str[i] == 'U'){
                vowel++;
            }
            else{
                consonant++;
            }
        }
        else if(str[i]>='a' && str[i]<='z'){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i] == 'o' || str[i] == 'u'){
                vowel++;
            }
            else{
                consonant++;
            }
        }
    }
    printf("Vowels = %d, Consonants = %d",vowel,consonant);
    return 0;
}