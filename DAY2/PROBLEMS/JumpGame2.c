#include <stdio.h>
#include <stdlib.h>

int jump(int *nums, int numsSize)
{
  int jumps = 0;
  int currentEnd = 0;
  int maxReach = 0;

  for (int i = 0; i < numsSize - 1; i++)
  {
    if (i + nums[i] > maxReach)
    {
      maxReach = i + nums[i];
    }
    if (i == currentEnd)
    {
      jumps++;
      currentEnd = maxReach;

      if (currentEnd >= numsSize - 1)
      {
        break;
      }
    }
  }
  return jumps;
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

  int result = jump(pillars, n);
  printf("Minimum number of jumps to reach the end: %d\n", result);

  free(pillars);
  return 0;
}