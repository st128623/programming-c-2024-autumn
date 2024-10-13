#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	int array[1000] = { 0 };
	int x = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	scanf("%d", &x);
	int k = array[0];
	for (int i = 0; i < n; i++)
	{
		if (abs(array[i] - x) == abs(k - x) && array[i] < k || abs(array[i] - x) < abs(k - x))
		{
			k = array[i];
		}
	}
	printf("%d\n", k);
	return EXIT_SUCCESS;
}