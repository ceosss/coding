#include <stdio.h>

void update(int *a, int *b)
{
    int minus = *a > *b ? *a - *b : *b - *a;
    *a = *a + *b;
    *b = minus;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}