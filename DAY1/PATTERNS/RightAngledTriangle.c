#include <stdio.h>
int main()
{
  printf("Enter the height of the triangle: ");
  int height;
  scanf("%d", &height);
  for (int i = 1; i <= height; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}