#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* p = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		std::cin >> *(p + i);
	}

	int min = 0;
	for (int i = 1; i < n; i++) {
		bool smaller = false;

		for (int j = 0; j < n; j++) {
			int pos_min = (min + j) % n;
			int pos_i = (i + j) % n;

			if (*(p + pos_i) < *(p + pos_min)) {
				smaller = true;
				break;
			}
			else if (*(p + pos_i) > *(p + pos_min)) {
				break;
			}
		}

		if (smaller) {
			min = i;
		}
	}

	for (int i = 0; i < n; i++) 
	{
		std::cout << *(p + (min + i) % n) << " ";
	}

	free(p);
	return EXIT_SUCCESS;
}
