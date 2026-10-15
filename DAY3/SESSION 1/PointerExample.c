#include <stdio.h>
int main()
{
  int n = 10;
  int *ptr = &n;
  int *ptr2 = NULL;
  printf("%d\n", n);
  printf("%p\n", (void *)ptr2);
  *ptr = *ptr + 10;
  char ch = 'A';
  char *p = &ch;
  *p = 'B';
  printf("%c\n\n", ch);

  int arr[3] = {10, 20, 30};
  int (*ptr3)[3] = &arr;
  printf("%d\n\n", (*ptr3)[2]);

  int a=10, b=20, c=30;
  int *ptr4[3] = {&a, &b, &c};
 printf("%d\n", *ptr4[0]);
}