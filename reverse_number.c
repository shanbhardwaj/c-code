#include <stdio.h>

long reverse(long n);

int main(int argc, char *argv[])
{
  printf("Enter the number to reverse\n");
  long n, r = 0;
  scanf("%ld", &n);

  r = reverse(n);
  printf("Reverse of the entered number = %ld\n" , r);
  return 0;
}

long reverse(long n){
  static long r = 0;

  if(n == 0){
    return 0;
  }
  printf("I am r %ld\n" , r);
  r = r * 10;
  r = r + n%10;
  reverse(n/10);

  return r;
}
