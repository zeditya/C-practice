#include <stdio.h>
int main () {
  int num;
  printf("WELCOME TO TABLE CALCULATOR\n");
  printf("enter the number you want to print a table for\n");
  scanf("%d", &num);

  for (int i = 1; i <= 10 ; i++)
  {
    printf("%d X %d = %d\n" , num , i , num * i);
  }
  
  

  return 0;
}