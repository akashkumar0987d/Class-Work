#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int data[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
        scanf("%d", data + i);

    printf("Elements entered by user is : \n");
    for (int i = 0; i < 5; ++i)
        printf("%d ", *(data + i));
    return 0;
}

