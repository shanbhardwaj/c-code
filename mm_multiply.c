#include "stdio.h"

int main(int argc, char *argv[])
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];

  printf("Enter the number of rows and columns of the first matrix\n");
  scanf("%d%d", &m, &n);

  printf("Enter the elements for the first matrix\n");

  for (c = 0; c < m; ++c) {
    for (d = 0; d < n; ++d) {
      scanf("%d", &first[c][d]);
    }
  }

  printf("Enter the number of rows and columns of the second matrix\n");
  scanf("%d%d", &p, &q);

  if (n != p) {
    printf("The matrices cannot be multiplied with each other\n");
  }
  else
    {
      printf("Enter the elements for the second matrix\n");

      for (c = 0; c < p; ++c) {
        for (d = 0; d < q; ++d) {
          scanf("%d", &second[c][d]);
        }
      }

      for (c = 0; c < m; ++c) {
        for (d = 0; d < q; ++d) {
          for (k = 0; k < n; ++k) {
            sum = sum + first[c][k]*second[k][d];
          }

          multiply[c][d] = sum;
          sum = 0;
        }
      }

      printf("Product of the matrices\n");
      for (c = 0; c < m; ++c) {
        for (d = 0; d < q; ++d) {
          printf("%d\t", multiply[c][d]);
        }
        printf("\n");
      }

    } /*end else*/

  return 0;
}
