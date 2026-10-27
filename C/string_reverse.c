#include<stdio.h>
#include<string.h>

void reverse(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    while(left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }    
}
        
int main() {

    char s[100];
    printf("Enter a string : ");
    scanf("%[^\n]", s);
    printf("Original : %s\n", s);
    reverse(s);
    printf("Reversed : %s\n", s);
    
    return 0;
}    