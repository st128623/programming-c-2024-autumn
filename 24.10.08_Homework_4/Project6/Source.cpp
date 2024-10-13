#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	int v[100] = { 0 };
	int p[100] = { 0 };
	int num = 1;
	int max = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
		if (v[i] * p[i] > max)
		{
			max = p[i] * v[i];
			num = i + 1;
		}
	}
	printf("%d", num);
	return EXIT_SUCCESS;
}