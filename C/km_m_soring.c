#include<stdio.h>

typedef struct
{
    int km;
    int m;
}distance;

distance readinput(int);
void writeoutput(distance inf);
void sortoutput(distance inf[]);
int main()
{
    distance inf[5];
    int i;
    
    for ( i =0; i<5;i++)
    {
        inf[i] = readinput(i);
    }
    for ( i =0; i<5;i++)
    {
        writeoutput(inf[i]);
        
    }
    sortoutput(inf);
    printf("\n\nSorted output: \n");
    for ( i =0; i<5;i++)
    {
        writeoutput(inf[i]);
        
    }
}
distance readinput(int i)
{
    distance inf;
    printf("Enter kilometer: ");
    scanf("%d", &inf.km);
    printf("Enter meter: ");
    scanf("%d", &inf.m);
    return(inf);
}
void writeoutput(distance inf)
{
    printf("\nDistance:\t%d km\t%d m", inf.km, inf.m);
}
void sortoutput(distance inf[])
{
    int i, j;
    distance temp;
    for(i = 0; i < 5; i++)
    {
        for(j =0; j<5; j++)
        {
            if (inf[j].km > inf[i].km)
            {
                temp = inf[i];
                inf[i] = inf[j];
                inf[j] = temp;
            }
        }
    }
}