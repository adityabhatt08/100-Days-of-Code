/*Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

//This code can handle the bugs such as:
//(i) Space before the first name
//(ii) Space after the last name
//(iii) Double spaces
//(iv) Initials not being in capital.
//Still, it is advised to ensure that the input is correct.
//Thank you.

#include <stdio.h>

int main(){
    char name[100];
    printf("Enter a name: ");
    fgets(name,100,stdin);
    
    if(name[0]>='a' && name[0]<='z'){
        name[0] -= 32;
    }

    if(name[0]!=' '){ //If the name is not starting with a space.
        printf("%c.",name[0]);
    }
    for(int i=0; name[i]!='\n'; i++){
        if(name[i] == ' '){
            if(name[i+1]==' '){
                continue;
            }
            if(name[i+1]=='\n'){
                break;
            }
            if(name[i+1]>='a' && name[i+1]<='z'){
                name[i+1] -=32;
            }
            printf("%c.",name[i+1]);
        }
    }
    return 0;
}