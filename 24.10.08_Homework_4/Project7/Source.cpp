#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int array[1000] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}
	return EXIT_SUCCESS;
}