#include <stdio.h>
int n = 0;
int main()
{
  printf("%d\n", n);
  n = n + 1;
  if (n == 5)
  {
    return 0;
  }
  main();
  return 0;
}