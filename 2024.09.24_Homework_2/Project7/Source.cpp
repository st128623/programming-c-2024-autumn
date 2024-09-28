#include<iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	int ans = 0;

	scanf_s("%d", &k);
	scanf_s("%d", &m);
	scanf_s("%d", &n);

	if (n <= k)
	{
		ans = 2 * m;
		printf("%d", ans);
		return 0;
	}
	else if (2 * n % k == 0)
	{
		ans = m * (2 * n / k);
		printf("%d", ans);
		return 0;
	}
	else
	{
		ans = m * (1 + 2 * n / k);
		printf("%d", ans);
		return 0;
	}
	return EXIT_SUCCESS;
}