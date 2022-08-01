#include<stdio.h>

void funca(int a)
{
   static int i = 1;

    i++;

    printf(" %d", i);
}
int main()
{

     int a =1;
    // int b;
    // b = a;

    funca(a);
     funca(a);
      funca(a);
//     for(int i =0; i<10; i++)
//     {

//    // printf("%d ", ++a);
//      printf(" %d",a++);
    // }
}
