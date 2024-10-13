#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int left = 0;
	int right = 0;
	int array[1000] = { 0 };
	int max = -1001;
	int index = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	scanf("%d", &left);
	scanf("%d", &right);
	for (int i = left - 1; i < right; i++)
	{
		if (array[i] > max) {
			max = array[i];
			index = i + 1;
		}
	}
	printf("%d ", max);
	printf("%d", index);
	return EXIT_SUCCESS;
}