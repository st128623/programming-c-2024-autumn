#include <iostream>

int main(int argc, char* argv[]) 
{
    int n = 0;
    int five_ruble = 0;
    int three_ruble = 0;
    int remainder = 0;

    scanf_s("%d", &n);

    five_ruble = n / 5;
    remainder = n % 5;
    if (remainder % 3 == 0) 
    {
        three_ruble = remainder / 3;
    }
    else if ((remainder + 5) % 3 == 0 && five_ruble > 0) 
    {
        five_ruble--;
        three_ruble = (remainder + 5) / 3;
    }
    else if ((remainder + 10) % 3 == 0 && five_ruble > 1) 
    {
        five_ruble -= 2;
        three_ruble = (remainder + 10) / 3;
    }
    printf("%d %d\n", five_ruble, three_ruble);
    return EXIT_SUCCESS;
}
