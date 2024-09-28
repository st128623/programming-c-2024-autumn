#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	int radius1 = 0;
	int radius2 = 0;

	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	scanf_s("%d", &x2);
	scanf_s("%d", &y2);
	scanf_s("%d", &radius1);
	scanf_s("%d", &radius2);

	double distance_between_centers = 0;
	distance_between_centers = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	if ((distance_between_centers <= (radius1 + radius2)) && (distance_between_centers >= (abs(radius1 - radius2))))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return EXIT_SUCCESS;
}