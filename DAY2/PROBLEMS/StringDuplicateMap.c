#include <stdio.h>
int main()
{
  char str1[100];
  printf("Enter the string: ");
  scanf("%s", str1);
  int hash[26] = {0};
  for (int i = 0; str1[i] != '\0'; i++)
  {
    char ch = str1[i];
    if (ch >= 'a' && ch <= 'z')
    {
      int index = ch - 'a';
      hash[index]++;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
      int index = ch - 'A';
      hash[index]++;
    }
  }
  for (int i = 0; i < 26; i++)
  {
    printf("%c has %d occurances\n", 'a' + i, hash[i]);
  }
  return 0;
}