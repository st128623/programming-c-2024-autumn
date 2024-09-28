#include<iostream>

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int time = 0;

	scanf_s("%d", &m);
	scanf_s("%d", &n);
	
	if (n == 1 || m == 1)
	{
		time = n * m * 4;
	}
	else
	{
		time = (m + 2) * n + m * (n + 2);
		if ((m % 2 != 0) && (n % 2 != 0))
		{
			time -= 2;
		}
	}
	printf("%d", time);
	return EXIT_SUCCESS;
}