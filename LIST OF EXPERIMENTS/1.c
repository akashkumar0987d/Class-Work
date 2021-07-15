#include <stdio.h>

int main()
{
    int num,divisor,qot, rem;
    printf("Enter the number: ");
    scanf("%d %d",&num,&divisor);
    qot=num/divisor;
    rem=num%divisor;
    printf("qotient= %d  and remainder = %d",qot,rem);
    return 0;
}
