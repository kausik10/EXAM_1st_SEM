#include<stdio.h>
#include<stdlib.h>

float average(int *avg, int n)
{
    int i;
    float sum;
    for(i=0; i<n; i++)
    {
        scanf("%d", &avg[i]);
        sum+=avg[i];
    }
    return sum;
}
int main()
{
    int n;
    int *arr;
    float sum, aver;

    printf("How many numbers: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    sum =  average(arr, n);

    aver = sum / n;
    printf("Average is: %.2f", aver);
    return 0;
}