/* A;gorithm:-
   Step 1:- Start
   Step 2:- Declare Variable a, b, and sum
   Step 3:- Input a and b
   Step 4:- Sum=a+b;
   Step 5:- print Sum;
   Step 6:- Stop   */
// write a c program for addition of 2 integer number and display its result.
#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter a: ");
    scanf("%d %d",&a);
    printf("Enter b: ");
    scanf("%d %d",&a);
    sum=a+b;
    printf("sum of %d and %d is %d",a,b,sum);
    return 0;
}
