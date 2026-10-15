#include <stdio.h>
int main()
{
  printf("Enter the height of the triangle: ");
  int height;
  scanf("%d", &height);
  for (int i = 1; i <= height; i++)
  {
    for (int j = height; j >= i; j--)
    {
      printf("  ");
    }
    for (int k = 1; k <= i; k++)
    {
      printf("* ");
    }
    printf("\n");
  }
}