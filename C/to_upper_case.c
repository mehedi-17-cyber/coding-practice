#include<stdio.h>
#include<string.h>
#include<ctype.h>

void to_upper(char* s) {
    int i = 0;
    while(s[i]!='\0') {
        char c = s[i];
        if(c >= 'a' && c <= 'z') {
            c-=32;
            s[i] = c;
        }
        i++;
    }
}            

int main() {

    char s[100];
    printf("Enter a string : ");
    scanf("%[^\n]", s);
    to_upper(s);
    printf("Uppercase : %s", s);
    
    return 0;
}