#include <stdio.h>
int rec(int n)
{
  if (n > 100)
  {
    return n - 10;
  }
  return rec(rec(n + 11));
}
int main()
{
  printf("%d\n", rec(100));
  return 0;
}