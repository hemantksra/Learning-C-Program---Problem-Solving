#include <stdio.h>
int main()
{
  printf("Enter the height of the pyramid: ");
  int height;
  scanf("%d", &height);
  for (int i = height; i >= 1; i--)
  {
    for (int j = 1; j <= height - i; j++)
    {
      printf("  ");
    }
    for (int k = 1; k <= (2 * i - 1); k++)
    {
      printf("* ");
    }
    printf("\n");
  }
}