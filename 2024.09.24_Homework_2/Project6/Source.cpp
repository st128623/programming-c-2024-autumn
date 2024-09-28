#include<iostream>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long b = 0;
	long long c = 0;

	scanf_s("%lld", &a);
	scanf_s("%lld", &b);
	scanf_s("%lld", &c);

	double root1 = 0;
	double root2 = 0;
	long long d = 0;
	double sqrtD = 0;
	d = b * b - 4 * a * c;

	if (a == 0)
	{
		if (b == 0 && c == 0)
		{
			printf("-1");
			return 0;
		}
		else if (b != 0)
		{
			printf("1\n");
			root1 = (-1.0) * c / b;
			printf("%.6f\n", root1);
			return 0;
		}
		else if (b == 0 && c != 0)
		{
			printf("0");
			return 0;
		}
	}
	if (d < 0)
	{
		printf("0");
		return 0;
	}
	if (d == 0)
	{
		root1 = (-1.0) * b / (2.0 * a);
		printf("1\n");
		printf("%.6f", root1);
		return 0;
	}
	if (d > 0)
	{
		sqrtD = sqrt(d);
		root1 = ((-1.0) * b - sqrtD) / (2 * a);
		root2 = ((-1.0) * b + sqrtD) / (2 * a);
		printf("2\n");
		if (root1 < root2)
		{
			printf("%.6f\n", root1);
			printf("%.6f\n", root2);
		}
		else
		{
			printf("%.6f\n", root2);
			printf("%.6f\n", root1);
		}
		
	}

	return EXIT_SUCCESS;
}