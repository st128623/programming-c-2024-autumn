#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int array[1000] = { 0 };
	scanf("%d", &n);
	scanf("%d", &array[0]);

	int max = array[0];
	int min = array[0];
	for (int i = 1; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	for (int i = 1; i < n; i++)
	{
		if (array[i] > max) {
			max = array[i];
		}
		else if (array[i] < min) {
			min = array[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (max == array[i])
		{
			array[i] = min;
		}
		printf("%d ", array[i]);
	}
	return EXIT_SUCCESS;
}