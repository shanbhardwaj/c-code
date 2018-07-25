#include <stdio.h>

long factorial(int);

int main(int argc, char *argv[])
{
  printf("Enter the number of rows you want to see in the Pascal triangle\n");

  int n = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i)
    {
      for (int k = 0; k <= (n - i - 2); ++k) {
        printf(" ");
      }

      for (int c = 0; c <= i; ++c) {
        printf("%ld ", factorial(i)/(factorial(c) * factorial(i-c)));
      }
      printf("\n");
  }

  return 0;
}

long factorial(int n)
{
  int c;
  long result = 1;

  for (c = 1; c <= n; c++)
    result = result*c;

  return result;
}
