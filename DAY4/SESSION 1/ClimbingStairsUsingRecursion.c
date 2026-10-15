#include <stdio.h>

int climb(int n)
{
  if (n == 0 || n == 1)
    return 1;
  return climb(n - 1) + climb(n - 2);
}

int main()
{
  int n;
  printf("Enter the number of stairs: ");
  scanf("%d", &n);
  printf("Number of ways to climb %d stairs is: %d\n", n, climb(n));
  return 0;
}