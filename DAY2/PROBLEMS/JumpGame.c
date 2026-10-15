#include <stdio.h>
#include <stdlib.h>

bool canJump(int *pillars, int n)
{
  int maxReach = 0;
  for (int i = 0; i < n; i++)
  {
    if (i > maxReach)
    {
      return false;
    }
    if (i + pillars[i] > maxReach)
    {
      maxReach = i + pillars[i];
    }
  }
  return true;
}

int main()
{
  int n;
  printf("Enter the number of pillars: ");
  scanf("%d", &n);
  int *pillars = (int *)malloc(n * sizeof(int));
  printf("Enter the values of the pillars: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &pillars[i]);
  }
  if (canJump(pillars, n))
  {
    printf("The ball reaches the end.\n");
  }
  else
  {
    printf("The ball does not reach the end.\n");
  }
  free(pillars);
  return 0;
}