#include <stdio.h>
int main () {
  int num = 1;
  while (num <= 10)
  {
     printf("%d\n", num);
     num = num + 1;
  }
  printf ("the numbers are printed and the first loop has ended successfully");
  
  int num2 = 1000;
  while (num2 > 0)
  {
    printf("%d\n", num2);
    num2--;
  }
  printf("the 2nd loop has also ended");
  return 0;
  
}