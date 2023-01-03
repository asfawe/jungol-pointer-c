#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;
    int *a_ptr = &a;
    int *b_ptr = &b;

    scanf("%d %d", a_ptr, b_ptr);

    printf("%d + %d = %d\n", *a_ptr, *b_ptr, *a_ptr + *b_ptr);
    printf("%d - %d = %d\n", *a_ptr, *b_ptr, *a_ptr - *b_ptr);
    printf("%d * %d = %d\n", *a_ptr, *b_ptr, *a_ptr * *b_ptr);
    printf("%d / %d = %d\n", *a_ptr, *b_ptr, *a_ptr / *b_ptr);

    return 0;
}