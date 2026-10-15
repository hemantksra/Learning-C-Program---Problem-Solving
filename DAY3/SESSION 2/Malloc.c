#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr = (int *)malloc(4 * sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory not allocated.\n");
    return 1;
  }
  ptr[0] = 1;
  ptr[1] = 2;
  ptr[2] = 3;
  ptr[3] = 4;
  printf("Value at ptr[0]: %d\n", ptr[0]);
  printf("Value at ptr[1]: %d\n", ptr[1]);
  printf("Value at ptr[2]: %d\n", ptr[2]);
  printf("Value at ptr[3]: %d\n", ptr[3]);
  free(ptr);
  return 0;
}