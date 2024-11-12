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

	int sum = 0;
	int min_index = 0;
	int max_index = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) > 0)
		{
			sum += *(p + i);
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (*(p + i) < *(p + min_index))
		{
			min_index = i;
		}
		if (*(p + i) > *(p + max_index))
		{
			max_index = i;
		}
	}
	int product = 1;
	if (min_index < max_index) {
		for (int i = min_index + 1; i < max_index; i++) {
			product *= *(p + i);
		}
	}
	else {
		for (int i = max_index + 1; i < min_index; i++) {
			product *= *(p + i);
		}
	}
	std::cout << sum<< " " << product << std::endl;

	free(p);
	return EXIT_SUCCESS;
}
