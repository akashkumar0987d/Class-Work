#include<stdio.h>  
long sum(int n)  
{  
  if (n == 0)  
    return 0;  
  else  
    return(n + sum(n-1));  
}  
void main()  
{  
  int number;  
  long summation;  
  printf("Enter a number: ");  
  scanf("%d", &number);   
  summation = sum(number);  
  printf("sum of first %d natural numbers is %ld\n", number, summation);  
}  

