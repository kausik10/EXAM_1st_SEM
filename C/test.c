#include<stdio.h>

int main(){
  int x = 1;
  
  while (x < 5)
  {
      if(x==1){
        continue;
      }
      else{

    printf("%d", x);
      }
    x++;
  }
    return 0;
}