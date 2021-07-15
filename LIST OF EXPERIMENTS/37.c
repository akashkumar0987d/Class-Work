#include <math.h>
#include <stdio.h>
float Standard_Deviation(float data[],int n);
int main() {
    int i,num;
    printf("Enter no of elements: ");
    scanf("%d",&num);
    float data[num];
    printf("Enter 10 elements: ");
    for (i = 0; i < num; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.6f", Standard_Deviation(data,num));
    return 0;
}

float Standard_Deviation(float data[], int n) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < n; ++i) {
        sum += data[i];
    }
    mean = sum / n;
    for (i = 0; i < n; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / n);
}
