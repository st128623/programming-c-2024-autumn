#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int n = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &n);

	printf("%d", 2 * n * a * b);
	return EXIT_SUCCESS;
}