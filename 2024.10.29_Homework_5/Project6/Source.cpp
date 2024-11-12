#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	int* first = (int*)calloc(100001, sizeof(int));
	int* second = (int*)calloc(100001, sizeof(int));

	for (int i = 0; i < n; i++)
	{
		int a = 0;
		scanf_s("%d", &a);
		(*(first + a)) = 1;
	}
	for (int i = 0; i < m; i++)
	{
		int a = 0;
		scanf_s("%d", &a);
		if (*(first + a) == 1)
		{
			(*(second + a)) = 1;
		}
	}

	for (int i = 0; i <= 100000; i++)
	{
		if (*(second + i) == 1)
		{
			printf("%d ", i);
		}
	}
	free(first);
	free(second);
	return EXIT_SUCCESS;
}