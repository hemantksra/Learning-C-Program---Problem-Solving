#include <stdio.h>
int main()
{
	int change;
	printf("Enter change amount: ");
	scanf("%d", &change);
	int count = 0;
	int notes[] = {100, 50, 20, 10, 5, 2, 1};
	for (int i = 0; i < 7; i++)
	{
		if (change == 0)
		{
			break;
		}
		else if (change >= notes[i])
		{
			count += change / notes[i];
			change = change % notes[i];
		}
	}
	printf("Minimum number of notes: %d\n", count);
	return 0;
}