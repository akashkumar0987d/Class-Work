
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
float disc,d,root1,root2;
printf("Enter value of a , b and c: ");
scanf("%f %f %f", &a,&b,&c);
disc=((b*b)-4*a*c);
if(disc<0)
{
    d=sqrt(-disc);
}
else
{
    d=sqrt(disc);
}


if (disc>0){
    root1=(((-b)+d)/(2*a));
    root2=(((-b)-d)/(2*a));
    printf("%.2f and %.2f", root1, root2);
}
else if(disc==0){
    root1=((-b)/(2*a));
    printf("%.2f and %.2f", root1, root1);
}
else{
    printf("%.2f + i%.2f and %.2f - i%.2f", -b/(2*a),d/(2*a),-b/(2*a),d/(2*a));
}
return 0;
}



