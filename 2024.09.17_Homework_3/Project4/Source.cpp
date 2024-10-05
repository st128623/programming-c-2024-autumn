#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int v = 0;
	int s = 0;
	int count = 0;
	int max_age = 0;
	int max_age_number = 0;

	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &v);
		scanf_s("%d", &s);
		if (s == 1)
		{
			count += 1;
			if (max_age < v)
			{
				max_age = v;
				max_age_number = i;
			}
		}

	}
	if (count == 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d", max_age_number);
	}
	return EXIT_SUCCESS;
}