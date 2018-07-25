
#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Enter the elements in the array\n");
  int n = 0;
  scanf("%d", &n);

  int array[20];

  printf("Enter the %d integers\n", n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", &array[i] );
  }

  printf("Enter the value to find\n");
  int search;
  scanf("%d", &search);

  int first = 0;
  int last = n-1;
  int middle = (first+last)/2;

  while (first <= last) {
  if (array[middle] < search ) {
    first = middle + 1;
  }else if(array[middle] == search) {
    printf("%d found at location %d\n" , search, middle+1);
    break;
  }else {
    last = middle + 1;
    middle = (first + last)/2;
  }
 }
 if (first > last) {
   printf("Not Found! %d is not present in the list\n",search);
 }
   return 0;
}
