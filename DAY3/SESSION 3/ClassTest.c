#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  printf("Enter the number of rows/columns(1 Value): ");
  scanf("%d", &n);
  int **arr = (int **)malloc(n * sizeof(int *));
  for (int i = 0; i < n; i++)
  {
    arr[i] = (int *)malloc(n * sizeof(int));
  }
  printf("Enter the elements: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < n / 2; i++)
  {
    for (int j = i; j < n - i - 1; j++)
    {
      int temp = arr[i][j];

      arr[i][j] = arr[n - 1 - j][i];

      arr[n - 1 - j][i] = arr[n - 1 - i][n - 1 - j];

      arr[n - 1 - i][n - 1 - j] = arr[j][n - 1 - i];

      arr[j][n - 1 - i] = temp;
    }
  }
  printf("Rotated Matrix:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", *(*(arr + i) + j));
    }
    printf("\n");
  }
  for (int i = 0; i < n; i++)
  {
    free(arr[i]);
  }
  free(arr);
}