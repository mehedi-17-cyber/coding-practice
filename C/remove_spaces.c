#include<stdio.h>

void remove_space(char* s) {
    int i = 0, j = 0;
    while(s[i]!='\0') {
        if(s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
        i++;
    }        
    s[j] = '\0';
}

int main() {
    
    char s[100];
    printf("Enter a string : ");
    scanf("%99[^\n]", s);
    remove_space(s);
    printf("Result : %s\n", s);
    
    return 0;
 }   