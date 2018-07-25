#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Enter the elements in the array\n");
  int n = 0;
  scanf("%d", &n);

  int array[5];
  int max;
  int location = 1;

  printf("Enter the %d integers\n", n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", &array[i] );
  }

  max = array[0];
  for (int i = 1; i < n; ++i) {
    if (array[i] > max) {
      max = array[i];
      location = i+1;
    }
  }

  printf("Maximum element is present at location %d, and its value is %d\n" , location, max);

  return 0;
}
