#include <stdio.h>
#include <string.h>

typedef struct
{
    int month;
    int year;
    int day;
} dob;
typedef struct
{
    dob d;
    int roll_num;
    char name[20];
    int marks;
} record;

void sort(record[], int);

int main()
{
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    record r[n];

    for (i = 0; i < n; i++)
    {
        printf("%d)\t Enter name: ", i + 1);
        scanf("%s", &r[i].name);

        printf("\t roll no:");
        scanf("%d", &r[i].roll_num);

        printf("\t marks:");
        scanf("%d", &r[i].marks);

        printf("\t DOB:\n");
        printf("\t\t year:");
        scanf("%d", &r[i].d.year);
        printf("\t\t month");
        scanf("%d", &r[i].d.month);
        printf("\t\t day:");
        scanf("%d", &r[i].d.day);
    }

    sort(r, n);

    return 0;
}

void sort(record r[], int n)
{
    int i, j;
    record temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(r[i].name, r[j].name) > 0)
            {
                temp = r[i];
                r[i] = r[j];
                r[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("Name: %s\t Roll:%d\t DOB:%d/%d/%d\t Marks:%d\n", r[i].name, r[i].roll_num, r[i].d.day, r[i].d.month, r[i].d.year, r[i].marks);
    }
}