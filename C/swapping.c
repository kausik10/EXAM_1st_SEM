#include<stdio.h>

void swap(int *p, int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("New a: %d\n", a);
    printf("New b: %d\n", b);
    return 0;
}