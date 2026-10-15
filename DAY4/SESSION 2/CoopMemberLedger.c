#include <stdio.h>

typedef struct
{
  char village[100];
  int pincode;
} Address;

typedef struct
{
  int id;
  char name[50];
  float share_capital;
  Address address;
} Member;

int main()
{
  int n;
  printf("Enter the number of members: ");
  scanf("%d", &n);
  Member members[n];

  for (int i = 0; i < n; i++)
  {
    printf("Enter details for member %d:\n", i + 1);
    printf("ID: ");
    scanf("%d", &members[i].id);
    printf("Name: ");
    scanf("%s", members[i].name);
    printf("Share Capital: ");
    scanf("%f", &members[i].share_capital);
    printf("Village: ");
    scanf("%s", members[i].address.village);
    printf("Pincode: ");
    scanf("%d", &members[i].address.pincode);
  }
  float total_share_capital = 0;
  int hightest_share_id = 0;
  printf("\nMEMBER LEDGER\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", members[i].id);
    printf("%s ", members[i].name);
    printf("%s ", members[i].address.village);
    printf("%d ", members[i].address.pincode);
    printf("%.2f\n", members[i].share_capital);
    total_share_capital += members[i].share_capital;
    if (members[i].share_capital > members[hightest_share_id].share_capital)
    {
      hightest_share_id = i;
    }
  }
  printf("Total share capital (Rs): %.2f\n", total_share_capital);
  printf("Highest holder: ");
  printf("%d ", members[hightest_share_id].id);
  printf("%s ", members[hightest_share_id].name);
  printf("%s ", members[hightest_share_id].address.village);
  printf("%d\n", members[hightest_share_id].address.pincode);
  printf("%.2f ", members[hightest_share_id].share_capital);
  return 0;
}