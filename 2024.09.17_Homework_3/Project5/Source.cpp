#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int roads = 0;
	int count_roads = 0;

	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf_s("%d", &roads);
			if (j>i && roads == 1)
			{
				count_roads += 1;
			}
		}
	}
	printf("%d", count_roads);
	return EXIT_SUCCESS;
}