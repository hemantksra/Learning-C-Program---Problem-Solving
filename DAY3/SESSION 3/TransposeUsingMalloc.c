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
  int res[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      res[j][n - 1 - i] = arr[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      arr[i][j] = res[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < n; i++)
  {
    free(arr[i]);
  }
  free(arr);
  return 0;
}