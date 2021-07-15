#include <stdio.h>
int main() {
   int a,b,temp;
   printf("Enter two numbers: ");
   scanf("%d %d",&a,&b);
   printf("Numbers before swapping :- a=%d, b=%d\n",a,b);
   temp=a;
   a=b;
   b=temp;
   printf("Numbers after swapping :- a=%d, b=%d",a,b);
   return 0;
}

