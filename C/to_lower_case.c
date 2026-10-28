#include<stdio.h>
#include<string.h>
#include<ctype.h>

void to_lower(char* s) {
    int i = 0;
    while(s[i]!='\0') {
        char c = s[i];
        if(c >= 'A' && c <= 'Z') {
            c+=32;
            s[i] = c;
        }
        i++;
    }
}            

int main() {

    char s[100];
    printf("Enter a string : ");
    scanf("%[^\n]", s);
    to_lower(s);
    printf("Lowercase : %s", s);
    
    return 0;
}