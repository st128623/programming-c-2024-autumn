#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int temp = 0;
	int nod = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int original_a = a;
	int original_b = b;
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	nod = a;
	printf("%d", original_a * original_b / nod);
	return EXIT_SUCCESS;
}