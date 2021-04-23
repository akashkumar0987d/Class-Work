/* Step 1:- Start
   Step 2:- Declare Variable l, w, and area
   Step 3:- Input l and w
   Step 4:- Compute area=l*w;
   Step 5:- print area;
   Step 6:- Stop */
#include <stdio.h>
int main()
{
    float l, w, area;
    printf("Enter l:  ");
    scanf("%f",&l);
    printf("Enter w:  ");
    scanf("%f",&w);
    
    area=l*w;
    printf("area is %f",area);
    return 0;
}
