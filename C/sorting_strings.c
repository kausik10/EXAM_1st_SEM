#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reorder(int n, char str[][10])
{
    char temp[10];
    int i, j;

    for(i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if((strcmp(str[i], str[j]))> 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}
int main()
{
    char str[10][10];
    int i=0, n;

    do
    {
        printf("String %d: ", i+1);
        scanf("%s", str[i]);
    }while(strcmp(str[i++], "END"));

    i--;
    reorder(n,str);
    printf("\nReordered list: ");
    for(n=0; n < i; n++)
    {
        printf("\nString %d: %s", n+1, str[n]);
    }
    return 0;
}