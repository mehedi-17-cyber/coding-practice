#include<stdio.h>

void swapcase(char* s) {
    int i = 0;
    while(s[i]!='\0') {
        char c = s[i];
        if(c >= 'a' && c <= 'z')
            c-=32;
        else if(c >= 'A' && c <= 'Z')
            c+=32;
        s[i] = c;
        i++;
    }    
}

int main() {
    
    char s[100], c;
    printf("Enter a string : ");
    scanf("%99[^\n]", s);
    swapcase(s);
    printf("Swapcase : %s", s);
    
    return 0;
 }   