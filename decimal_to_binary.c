/* #include "stdio.h" */
#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Enter an integer in decimal number system\n");

  int num;
  scanf("%d", &num);

  printf("The number in binary number system is\n");

  /* first print the left most digit and go right  */
  for (int i = 31; i >= 0; --i) {
    int k = num >> i

    if (k & 1) {
                printf("1");
    } else {
            printf("0")  ;
    }
  }

  return 0;
}
