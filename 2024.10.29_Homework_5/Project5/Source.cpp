#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* price = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		std::cin >> *(price + i);
	}

	int sum = 0;
	int length = 1;

	for (int i = 0; i < n; i++)
	{
		int max = *(price + i);
		int index = i;

		for (int j = i + 1; j < n; j++)
		{
			if (*(price + j) > max)
			{
				max = *(price + j);
				index = j;
			}
		}

		if (i == index)
		{
			sum += *(price + i) * length;
			length = 1;
		}
		else
		{
			length++;
		}
	}
	std::cout << sum << std::endl;
	free(price);
	return EXIT_SUCCESS;
}