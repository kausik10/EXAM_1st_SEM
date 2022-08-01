/**
Write a C program that illustrates how an array of structures is passed to a function, and how 
a pointer to a particular structure is returned

Define a string. With example, describe any six string manipulating functions.

Briefly explain different types of storage class specifier that are used in C programming 
language. Write a C program to copy and compare structure variables
**/
#include<stdio.h>

typedef struct{
    char name[20];
    char depart[10];
    int block_no;
    int roll_num;
}class;
class readinput(int);
void writeoutput(class s);
int main()
{
    class s[5];
    int i;
    for(i=0; i<5; i++)
    {
        s[i] = readinput(i);
    }
    for(i=0; i<5; i++)
    {
        writeoutput(s[i]);
    }
}
class readinput(int i)
{
    class s;
    printf("\nEnter name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter department: ");
    scanf(" %[^\n]", s.depart);
    printf("Enter roll_number: ");
    scanf("%d", &s.roll_num);
    printf("Enter block_number: ");
    scanf("%d", &s.block_no);

    return(s);
}
void writeoutput(class s)
{
    printf("\nName: %s\t Department: %s\t Roll_number: %d\t Block_number: %d\t", s.name, s.depart, s.roll_num, s.block_no);
}