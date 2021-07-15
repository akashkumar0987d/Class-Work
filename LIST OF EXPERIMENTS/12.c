#include <stdio.h>
 
int main()
{
    int num;
    long int fact=1;
    printf("Enter a number: \n");
    scanf("%d", &num);
    for(int i=1;i<=num;i++)
    fact=fact*i;
    
    printf("factorial of %d is %ld",num,fact);
    return 0;
}

