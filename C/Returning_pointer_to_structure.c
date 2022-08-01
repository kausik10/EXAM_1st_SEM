RETURNING POINTER TO STRUCTURE
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int x;
} example;

example *scanEg(example ex)
{
  example *ptr = &ex;

  printf("Enter x: ");
  scanf("%d", &ptr->x);

  return ptr;
}

int main()
{
  example eg;
  example *ptr = scanEg(eg);

  printf("%d\n", ptr->x);
}