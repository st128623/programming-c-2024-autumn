#include<iostream>

int main(int argc, char* argv[])
{
	int h = 0;
	int a = 0;
	int b = 0;

	scanf_s("%d", &h);
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int c = h - a;
	int positiv = (c + (c - 1)) / (c + 1.1);
	positiv = (positiv) % 3;
	int days = 1 + (h - b - 1) / (a - b) * positiv;
	printf("%d", days);
	return EXIT_SUCCESS;
}