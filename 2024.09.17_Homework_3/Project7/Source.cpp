#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	scanf_s("%d", &n);
	scanf_s("%d", &m);

	int a = n;
	int b = m;
	int nod = 0;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	nod = a;
	printf("%d", n / nod);
	return EXIT_SUCCESS;
}