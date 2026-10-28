#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* concat(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    char* res = (char*)malloc(len1+len2+1);
    int i = 0;
    while(s1[i]!='\0') {
        res[i] = s1[i];
        i++;
    }    
    int j = 0;
    while(s2[j]!='\0') {
        res[i] = s2[j];
        i++;
        j++;
    }    
    res[i] = '\0';
    return res;        
}

int main() {

    char s1[100], s2[100];
    printf("Enter the first string : ");
    scanf("%[^\n]", s1);
    getchar();
    printf("Enter the se string : ");
    scanf("%[^\n]", s2);
    char* res = concat(s1,s2);
    printf("Concatenated string : %s\n", res);
    free(res);
    
    return 0;
}