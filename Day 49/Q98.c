/*Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

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
    printf("Enter a name dawg: ");
    fgets(name,100,stdin);

    if(name[0]>='a' && name[0]<='z'){
        name[0] -= 32;
    }

    if(name[0]!=' '){
        printf("%c.",name[0]);
    }

    for(int i=0; name[i]!='\n'; i++){
        if(name[i]==' '){
            for(int j=i; name[j]!='\n'; j++){
                if(name[j]!=' '){
                    break;
                }
                else if(name[j+1]=='\n'){
                    name[i] = '\n';
                    if(i!=0)
                    i -= 1;
                    break;
                }
            }
        }
    }

    for(int i=0; name[i]!='\n'; i++){
        if(name[i]==' '){
            if(name[i+1]==' '){
                continue;
            }
            if(name[i+1]=='\n'){
                break;
            }
            if(name[i+1]>='a' && name[i+1]<='z'){
                name[i+1] -=32;
            }
            for(int j=i+1; name[j]!=' ' && name[j]!='\n'; j++){
                if(name[j+1]==' '){
                    printf("%c.",name[i+1]);
                }
                else if(name[j+1]=='\n'){
                    printf(" ");
                    for(int k=i+1; name[k]!='\n'; k++){
                        printf("%c",name[k]);
                    }
                }
            }
        }
    }
    return 0;
}