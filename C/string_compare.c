#include<stdio.h>
#include<string.h>

int compare(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    int i = 0;
    while(s1[i]!='\0' && s2[i]!='\0') {
        if(s1[i] > s2[i])
            return 1;
        else if(s1[i] < s2[i])
            return -1;
        i++;
    }
    if(s1[i] == '\0' && s2[i] == '\0')
        return 0;
    if(s1[i] == '\0')
        return -1;
    else
        return 1;
}

int main() {

    char s1[100], s2[100];
    printf("Enter the first string : ");
    scanf("%[^\n]", s1);
    getchar();
    printf("Enter the se string : ");
    scanf("%[^\n]", s2);
    int r = compare(s1,s2);
    if(r > 0)
        printf("First string is bigger than the second");
    else if(r < 0)
        printf("First string is smaller than the second");
    else
        printf("Both strings are equal");

    return 0;
}