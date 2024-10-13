#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int array[1000] = { 0 };
	int count = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	scanf("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (array[i] == x) {
			count++;
		}
	}
	printf("%d", count);
	return EXIT_SUCCESS;
}