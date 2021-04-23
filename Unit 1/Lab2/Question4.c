/* Step 1:- Start
   Step 2:- Declare Variable l and area
   Step 3:- Input l
   Step 4:- Compute area=l*l;
   Step 5:- print area;
   Step 6:- Stop */
#include <stdio.h>
int main()
{
    int l, w, area;
    printf("Enter l:  ");
    scanf("%d",&l);
    area=l*l;
    printf("area of square is %d",area);
    return 0;
}
