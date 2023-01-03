#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    double sum = 0;
    int *n = &a;
    scanf("%d", n);
    double b[*n];
    double *ptr = b;

    for (int i = 0; i < *n; i++)
    {
        scanf("%lf", &ptr[i]);
    }

    for (int i = 0; i < *n; i++)
    {
        printf("%.2lf ", ptr[i]);
    }
    printf("\n");

    for (int i = 0; i < *n; i++)
    {
        sum += ptr[i];
    }
    printf("hap : %.2lf", sum);
    printf("\n");

    printf("avg : %.2lf", sum / *n);

    return 0;
}