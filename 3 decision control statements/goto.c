#include <stdio.h>
int main () {
   int num;
   input_number: //label for goto
   printf ("please enter the num\n");
   scanf("%d", &num);

   if (num != 10)
   {
    goto input_number;
   }
   
  return 0;
}