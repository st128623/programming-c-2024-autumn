#include<iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	int j = 0;
	int mod = 1000000000;
	
	scanf_s("%d", &i);
	scanf_s("%d", &j);

	int a = i;
	int b = j;
	int nod = 0;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	nod = a;

	int prev_fib = 0;
	int curr_fib = 1;
	if (nod == 0)
	{
		printf("0");
	}
	else if (nod == 1)
	{
		printf("1");
	}
	else
	{
		for (int k = 2; k <= nod; k++)
		{
			int next_fib = (prev_fib + curr_fib) % mod;
			prev_fib = curr_fib;
			curr_fib = next_fib;
		}
		printf("%d", curr_fib);
	}
	return EXIT_SUCCESS;
}