#include <stdio.h>

int main(int argc, char *argv[])
{
  int n, i, j, k, s;
  printf("Enter the number of rows in the start pyramid\n");
  scanf("%d", &n);

  s = n;

  for (i = 0; i < n; ++i) { // loop to print rows
    for (j = 0; j < s; ++j) {
      printf(" "); //
    }
    s--;
    for (k = 0; k < (i*2) - 1; ++k) {
      printf("*");
    }

    printf("\n");

  }


  return 0;
}
