#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int array[1000] = { 0 };
	int max = 0;
	int count = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			count = array[0] + array[1] + array[n - 1];
		}
		else if (i == n - 1)
		{
			count = array[n - 1] + array[0] + array[n - 2];
		}
		else
		{
			count = array[i - 1] + array[i] + array[i + 1];
		}

		if (count > max)
		{
			max = count;
		}
	}
	printf("%d\n", max);
	return EXIT_SUCCESS;
}