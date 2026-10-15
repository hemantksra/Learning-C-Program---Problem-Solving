#include <stdio.h>
int main()
{
  char str[] = "REVA";
  char *ptr = str;

  while (*ptr != '\0')
  {
    printf("%c", *ptr);
    ptr++;
  }
  printf("\n");

  char input[100];
  char *inputPtr = input;
  printf("Enter a string: ");
  for (int i = 0; i < 100; i++)
  {
    char ch = getchar();
    if (ch == '\n')
    {
      *inputPtr = '\0';
      break;
    }
    *inputPtr = ch;
    inputPtr++;
  }
  inputPtr = input;
  while (*inputPtr != '\0')
  {
    printf("%c", *inputPtr);
    inputPtr++;
  }
  printf("\n");
}