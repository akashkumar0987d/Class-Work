/* Algorithm:- 
Step 1:- Start
Step 2:- Declare Variable f1, f2, f3, f4, f5 and sum as float;
step 3:- Input f1, f2, f3, f4 and f5
Step 4:- Calculate sum = f1+f2+f3+f4+f5
Step 5:- Print sum
Step 6:- Stop
*/ 
#include <stdio.h>
int main()
{
    int f1,f2,f3,f4,f5,sum;
    printf("Enter f1:  ");
    scanf("%f",&f1);
    printf("Enter f2:  ");
    scanf("%f",&f2);
    printf("Enter f3:  ");
    scanf("%f",&f3);
    printf("Enter f4:  ");
    scanf("%f",&f4);
    printf("Enter f5:  ");
    scanf("%f",&f5);
    sum = f1+f2+f3+f4+f5;
    printf("Sum is %d",sum);
    return 0;
}
