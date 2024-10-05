#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int bus_height = 437;
	int bridge_height = 0;

	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &bridge_height);
		if (bridge_height <= bus_height)
		{
			printf("Crash %d", i);
			return 0;
		}
	}
	printf("No crash");
	return EXIT_SUCCESS;
}