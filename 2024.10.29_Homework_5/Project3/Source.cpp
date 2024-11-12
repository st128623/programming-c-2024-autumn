#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* p = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		std::cin >> *(p + i);
	}

	int* threes = (int*)malloc(n * sizeof(int));
	int* fours = (int*)malloc(n * sizeof(int));
	int count_threes = 0;
	int count_fours = 0;

	for (int i = 0; i < n; i++)
	{
		if (*(p + i) % 2 == 1)
		{
			*(threes + count_threes) = *(p + i);
			count_threes++;
		}
		else
		{
			*(fours + count_fours) = *(p + i);
			count_fours++;
		}
	}

	for (int i = 0; i < count_threes;i++)
	{
		std::cout << *(threes + i) << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < count_fours; i++)
	{
		std::cout << *(fours + i) << " ";
	}
	std::cout << std::endl;
	if (count_fours >= count_threes)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
	free(p);
	free(threes);
	free(fours);
	return EXIT_SUCCESS;
}
