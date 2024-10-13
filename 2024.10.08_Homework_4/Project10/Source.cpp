#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int array[1000] = { 0 };
	int temp = 0;

	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);;
	for (int i = 0; i < n; i++)
	{
		array[i] = i + 1;
	}
	for (int i = 0; i < (b - a + 1) / 2; i++)
	{
		temp = array[a - 1 + i];
		array[a - 1 + i] = array[b - 1 - i];
		array[b - 1 - i] = temp;
	}
	for (int i = 0; i < (d - c + 1) / 2; i++)
	{
		temp = array[c - 1 + i];
		array[c - 1 + i] = array[d - 1 - i];
		array[d - 1 - i] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	return EXIT_SUCCESS;
}