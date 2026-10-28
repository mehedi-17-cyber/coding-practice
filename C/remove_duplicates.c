#include<stdio.h>

void remove_duplicates(char* s) {
    int i, j, k;
    for(i = 0; s[i]!='\0'; i++) {
        for(j = 0; j < i; j++) {
            if(s[i] == s[j]) {
                for(int k = i; s[k]!='\0'; k++) {
                    s[k] = s[k+1];
                }
                i--;
                break;
            }
        }
    }
}

int main() {

    char s[100], c;
    printf("Enter a string : ");
    scanf("%99[^\n]", s);
    remove_duplicates(s);
    printf("Distinct : %s", s);

    return 0;
}