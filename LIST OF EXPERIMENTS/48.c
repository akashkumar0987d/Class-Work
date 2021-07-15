#include <stdio.h>
#include <string.h>
int main()
{
    char first[100];
    char second[100];
    printf("Enter first string: ");
    gets(first);
    printf("Enter second string: ");
    gets(second);
    strcat(first,second);
    printf("Concatenated String: %s\n", first);
    return 0;
}

