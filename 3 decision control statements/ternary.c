#include <stdio.h>
int main () {
  char gender;
  printf("please enter your gender (M/F):\n");
  scanf("%c", &gender);

  gender == 'M' ? printf("male") : printf("female");

  return 0;

}