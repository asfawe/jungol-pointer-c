#include <stdio.h>

int main()
{
    int n[5];
    int *ptr = n;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 5; i += 2)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}