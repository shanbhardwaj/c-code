#include "stdio.h"

int main(int argc, char *argv[])
{
  printf("Enter a number to calculate the factorial\n");

  int num;
  scanf("%d", &num);

  int fact = 1;

  for (int i = 0; i <= num; ++i) {
    if (i == 0) {
      fact = 1;
    }else {
      fact = fact * i;
    }
  }
  printf("The factorial of %d is \n %d\n", num, fact);
  return 0;
}
