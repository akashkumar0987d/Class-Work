#include <stdio.h>
void main()
{
    int rows, columns;
    printf("Enters rows and column : ");
    scanf("%d %d",&rows,&columns);
	int a[rows][columns],b[rows][columns],c[rows][columns];
	printf("Enter elements of A:\n");
	for(int i=0;i<rows;i++)
		for(int j=0;j<columns;j++)
			scanf("%d",&a[i][j]);
	printf("Enter elements of  B:\n");
	for(int i=0;i<rows;i++)
		for(int j=0;j<columns;j++)
			scanf("%d",&b[i][j]);
	for(int i=0;i<rows;i++)
		for(int j=0;j<columns;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("sum of 2 matrix is :\n");
	for(int i=0;i<rows;i++)
        {
		for(int j=0;j<columns;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}

