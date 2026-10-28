#include<stdio.h>

int letrer_count(char* s, char c) {
    int i = 0, count = 0;
    while(s[i]!='\0') {
        if(s[i] == c) count++;
        i++;
    }
    return count;    
}

int main() {
    
    char s[100], c;
    printf("Enter a string : ");
    scanf("%99[^\n]", s);
    getchar();
    printf("Enter a letter : ");
    scanf("%c", &c);
    printf("%c appears %i times", c, letrer_count(s,c));
    
    return 0;
 }   