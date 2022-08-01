#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct
{
    char name[20];
    int salary;
    int year;
    int taxable;
} Employee;

Employee readinput(int);
void writeoutput(Employee info);

int main()
{
   // printf("%d", TRUE);
  Employee info[5];
  
  int n, i, store;
  printf("Enter the number of records: ");
  scanf("%d", &n);
  
  for (i=0; i<n; i++)
  {
      info[i] = readinput(i);
      
      //Determines taxable or not
      if(info[i].salary > 0)
      {
          info[i].taxable = TRUE;
          info[i].taxable = 0.15 * info[i].salary;
      }
     store += info[i].taxable; 
  }
  for (i = 0; i < n; i++)
  {
      writeoutput(info[i]);
  }
  printf("\nTotal tax: %d\n", store);
  return 0;
}
Employee readinput(int i)
{
    Employee info;
    
     printf("\n\nEnter name: ");
     scanf(" %[^\n]", info.name);
     printf("Enter salary: ");
     scanf("%d", &info.salary);
     printf("Enter joined year: ");
     scanf("%d", &info.year);
     
     return(info);
}
void writeoutput(Employee info)
{
    
    printf("\nName: %s", info.name);
    printf("\tSalary: %d", info.salary);
    printf("\tTax Status: ");
    switch(info.salary)
    {
        case 0:
            info.taxable = FALSE;
            printf("Non taxable.\n");
            break;
        default:
            printf("Taxable\t");
            printf("Tax: %d", info.taxable);
            break;
    }
}
