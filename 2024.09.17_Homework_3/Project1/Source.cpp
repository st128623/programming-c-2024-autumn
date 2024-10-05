#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int count_heads = 0;
	int count_tails = 0;
	int coin = 0;

	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &coin);
		if (coin == 1)
		{
			count_tails += 1;
		}
		else
		{
			count_heads += 1;
		}

	}
	if (count_heads == 0 || count_tails == 0)
	{
		printf("0");
		return 0;
	}
	if (count_tails / count_heads >= 1)
	{
		printf("%d", count_heads);
	}
	else
	{
		printf("%d", count_tails);
	}
	return EXIT_SUCCESS;
}