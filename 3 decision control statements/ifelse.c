#include <stdio.h>
int main () {
  int age;
  printf("WELCOME TO ARTO \n please enter your age: ");
  scanf("%d" , &age);
   
  if (age >= 18)
  {
    printf("you are eligible for a license! \n");
  } else {
    printf("your are not eligible\n");
  }
  

  printf("your age is %d" , age);


  return 0;
}