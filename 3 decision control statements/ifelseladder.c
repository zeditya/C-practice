#include <stdio.h>
int main () {
  int age;
  printf("WELCOME TO ARTO \n please enter your age: ");
  scanf("%d" , &age);
   
  if (age < 18)
  {
    printf("you are young right now please apply after you turn 18 \n");
  } else if (age > 70)
  {
    printf("you are too old to apply anymore \n");
  } else {
    printf("your are eligible to apply!\n");
  }
  

  printf("your age is %d" , age);


  return 0;
}