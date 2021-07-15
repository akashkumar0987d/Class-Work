#include <stdio.h>
#include<string.h>
int main() {
    char s[100];
    printf("Enter the string: ");
    gets(s);
    int Length;
    Length=strlen(s);
    printf("Length of the string: %d", Length);
    return 0;
}
