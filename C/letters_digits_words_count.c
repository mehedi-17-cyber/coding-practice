#include<stdio.h>
#include<string.h>
#include<ctype.h>

void func(char* s) {
    int letters = 0, digits = 0, words = 1;
    int i = 0;
    while(s[i]!='\0') {
        char c = s[i];
        if(c == ' ') words++;
        else if(isalpha(c)) letters++;
        else if(isdigit(c)) digits++;
        i++;
    }    
    printf("Letters : %i\n", letters);
    printf("Words : %i\n", words);
    printf("Digits : %i\n", digits);
}
int main() {

    char s[100];
    printf("Enter a string : ");
    scanf("%[^\n]", s);
    func(s);

    return 0;
}