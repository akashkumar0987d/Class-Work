#include <stdio.h>
int main() {
   char c;
   printf("Enter the char:  ");
   scanf("%c",&c);
   if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
   printf("Char is vowel");
   else
   printf("Char is consonant");
   return 0;
}

