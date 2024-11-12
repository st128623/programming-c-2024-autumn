#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	std::cin >> n;
	int* p = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		std::cin >> *(p + i);
	}
	std::cin >> k;

	k = k % n;
	if (k < 0)
	{
		k += n;
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << *(p + (n - k + i) % n) << " ";
	}
	free(p);
	return EXIT_SUCCESS;
}