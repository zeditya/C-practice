#include <stdio.h>
int main () {
  int age;
  char is_indian;
  printf("enter your age:\n");
  scanf(" %d" , &age);
  printf("are you an indian citizen \n");
  scanf(" %c" , &is_indian);

   if (is_indian == 'Y' || (age >= 18 && age < 70))
   { 
     printf ("congrats!!! you are eligible for the license\n");
   }  else {
     printf ("you are not eligible for the license\n");
   }
   
  return 0;
}