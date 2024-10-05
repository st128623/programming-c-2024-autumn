#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int num = 0;
	int curr_count = 0;
	int max_count = 0;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &num);
		if (num > 0)
		{
			curr_count++;
		}
		else
		{
			curr_count = 0;
		}
		if (curr_count > max_count)
		{
			max_count = curr_count;
		}
	}
	printf("%d", max_count);
	return EXIT_SUCCESS;
}