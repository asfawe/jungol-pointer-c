#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int *ptr;
    ptr = &a;

    printf("%#p %d", ptr, a);

    return 0;
}