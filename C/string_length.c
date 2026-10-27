#include<stdio.h>

int len(char* s) {
    int l = 0;
    for(int i = 0; s[i]!='\0' && s[i]!='\n'; i++)
        l++;
    return l;
}
        
int main() {

    char s[100];
    printf("Enter a string : ");
    fgets(s, sizeof(s), stdin);
    int l = len(s);
    printf("Length : %i", l);
    
    return 0;
}    