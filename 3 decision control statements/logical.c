#include <stdio.h>
int main() {
  int age;
  char is_indian;

  printf("please enter your age\n");
  scanf("%d" , &age);

  printf("are you an indian citizen\n");
  scanf(" %c" , &is_indian);


  if ( is_indian== 'Y' && age >= 18 && age < 70)
  {
    printf("you are eligible\n");
  } else {
    printf("you are not eligible\n");
  }
  
  

  // if (is_indian == 'Y')
  // {
  //   if (age < 18)
  //   {
  //     printf("you are young, apply after 18\n");
  //   } else if (age > 70)
  //   {
  //     printf("you are senior, cant apply");
  //   } else {
  //     printf ("you are eligible\n");
  //   }
    
    
  // }else {
  //   printf("only indian citizens can apply");
  // }
  



  printf("your age is %d" , age);
  return 0;
}