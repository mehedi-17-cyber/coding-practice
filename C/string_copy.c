#include<stdio.h>

void copy(char* dest, char* src) {
    int i = 0;
    while(src[i]!='\0') {
        dest[i] = src[i];
        i++;
    }   
    dest[i] = '\0';
}
int main() {
    
    char dest[100], src[100];
    printf("Enter a string : ");
    scanf("%99[^\n]", src);
    copy(dest,src);    
    printf("Copied : %s\n", dest);
    
    return 0;
 }   