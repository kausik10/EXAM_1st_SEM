#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int roll;
    char name[20];
    char dept[20];
} student;

student input(int);
void arrange(student *, int);
void display(student *, int);

void main()
{
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    student *s = (student *)malloc(n * sizeof(student));
    for (i=0; i<n; i++)
    {
       s[i] = input(n);
    }
    arrange(s, n);
    display(s, n);
}

student input(int n)
{
        student s;
        printf(" Enter name, roll no. and department: ");
        scanf("%s %d %s", s.name, &s.roll, s.dept);
      return(s);
}

void arrange(student *s, int n)
{
    int i, j;
    student temp;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void display(student *s, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Name: %s\t Roll: %d\t Department: %s\n", s[i].name, s[i].roll, s[i].dept);
    }
}
