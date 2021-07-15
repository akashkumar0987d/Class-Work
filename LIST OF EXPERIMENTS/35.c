#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Average of all elements is %f\n", (float)sum/n);
    return 0;
}

