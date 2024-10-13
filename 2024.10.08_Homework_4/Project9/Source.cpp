#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000] = { 0 };
	int x = 0;
	int position = 1;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	scanf("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= x) {
			position++;
		}
		else
		{
			break;
		}
	}
	printf("%d", position);
	return EXIT_SUCCESS;
}