#include <stdio.h>
 
int main()
{
    int num,sum=0;
    printf("Enter a number: \n");
    scanf("%d", &num);
    for(int i=1;i<=num;i++)
    sum=sum+i;
    
    printf("Sum of first %d natural number is %d",num,sum);
}

