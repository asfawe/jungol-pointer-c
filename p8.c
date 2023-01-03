#include <stdio.h>

int main()
{
    int temp;
    int a;
    int *n = &a;
    scanf("%d", n);
    int b[*n];
    int *ptr = b;

    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < *n; i++)
    {
        for (int j = i; j < *n; j++)
            if (ptr[i] < ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
    }

    for (int i = 0; i < *n; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}