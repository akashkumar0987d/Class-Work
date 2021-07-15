#include <stdio.h>

// union declaration
union pack{
char a;
int	b;
double c;
} p;


int main()
{

	printf("\nOccupied size by union pack: %d",sizeof(p));

	// assign value to each member one by one other it will replace last value
	p.a='A';
	printf("\nValue of a:%c",p.a);

	p.b=10;
	printf("\nValue of b:%d",p.b);
	
	p.c=12345.6790;
	printf("\nValue of c:%f",p.c);

	// see, what will happen? if u will assign values together
	p.a='A';
	p.b=10;
	p.c=12345.6790;

	// here the last value of p.c will be accessed by all members
	printf("\nValue of a:%c, b:%d, c:%f",p.a,p.b,p.c);

	return 0;
}

