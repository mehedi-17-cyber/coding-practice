#include<stdio.h>
#include<string.h>
#include<ctype.h>

int vowels(char* s) {
    int vowel = 0;
    int i = 0;
    while(s[i]!='\0') {
        char c = tolower(s[i]);
        if (c == 'a' ||
            c == 'e' ||
            c == 'i' ||
            c == 'o' ||
            c == 'u') {
            vowel++;
        }
        i++;
    }
    return vowel;
}
int main() {

    char s[100];
    printf("Enter a string : ");
    scanf("%[^\n]", s);
    printf("Total vowels : %i\n", vowels(s));

    return 0;
}