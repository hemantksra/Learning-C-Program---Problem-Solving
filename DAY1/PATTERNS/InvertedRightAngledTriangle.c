#include <stdio.h>
int main()
{
  printf("Enter the height of the triangle: ");
  int height;
  scanf("%d", &height);
  for (int i = height; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}