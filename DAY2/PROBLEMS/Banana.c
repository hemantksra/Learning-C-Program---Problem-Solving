#include <stdio.h>

int minEatingSpeed(int *piles, int pilesSize, int h)
{
  int minSpeed = 1;
  int maxSpeed = piles[0];
  for (int i = 1; i < pilesSize; i++)
  {
    if (piles[i] > maxSpeed)
    {
      maxSpeed = piles[i];
    }
  }
  int result = maxSpeed;
  while (minSpeed <= maxSpeed)
  {
    int temp = minSpeed + (maxSpeed - minSpeed) / 2;
    long count = 0;
    for (int i = 0; i < pilesSize; i++)
    {
      count += piles[i] / temp;
      if (piles[i] % temp != 0)
        count++;
    }
    if (count <= h)
    {
      result = temp;
      maxSpeed = temp - 1;
    }
    else
    {
      minSpeed = temp + 1;
    }
  }
  return result;
}

int main()
{
  printf("Enter the number of piles: ");
  int pilesSize;
  scanf("%d", &pilesSize);
  int piles[pilesSize];
  printf("Enter the number of bananas in each pile: ");
  for (int i = 0; i < pilesSize; i++)
  {
    scanf("%d", &piles[i]);
  }
  printf("Enter the number of hours: ");
  int h;
  scanf("%d", &h);
  int result = minEatingSpeed(piles, pilesSize, h);
  printf("The minimum eating speed is: %d\n", result);
  return 0;
}