#include<stdio.h>

int main ()
{
    int arr[3][3];
    int sum;
    int i,j;
    int count = 0;
    for(i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        sum = 0;
        for(j=0;j<3;j++)
        {
            printf("%d ", arr[i][j]);
            sum +=arr[i][j];
        }
        printf("\tSum = %d", sum);
        printf("\n");
    }
    
    for(i=0;i<3;i++)
    {
        for (j = 0; j< 3; j++)
        {
         if((arr[i][j] != 0) && (i != j))
                count++;
                break;
         
        }
    }
    if(count == 0)
        printf("\nDiagonal Matrix");
    else
        printf("\nNon-diagonal matrix");
       printf("\n");
    
}

