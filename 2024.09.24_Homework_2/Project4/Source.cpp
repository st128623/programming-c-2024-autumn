#include <iostream>

int main(int argc, char* argv[])
{
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;

    scanf_s("%d", &a1);
    scanf_s("%d", &b1);
    scanf_s("%d", &c1);
    scanf_s("%d", &a2);
    scanf_s("%d", &b2);
    scanf_s("%d", &c2);

    int temp = 0;
    if (a1 > b1)
    {
        temp = a1;
        a1 = b1;
        b1 = temp;
    }
    if (b1 > c1)
    {
        temp = b1;
        b1 = c1;
        c1 = temp;
    }
    if (a1 > b1)
    {
        temp = a1;
        a1 = b1;
        b1 = temp;
    }

    if (a2 > b2)
    {
        temp = a2;
        a2 = b2;
        b2 = temp;
    }
    if (b2 > c2)
    {
        temp = b2;
        b2 = c2;
        c2 = temp;
    }
    if (a2 > b2)
    {
        temp = a2;
        a2 = b2;
        b2 = temp;
    }

    if (a1 == a2 && b1 == b2 && c1 == c2)
    {
        printf("Boxes are equal\n");
    }
    else if (a1 <= a2 && b1 <= b2 && c1 <= c2)
    {
        printf("The first box is smaller than the second one\n");
    }
    else if (a1 >= a2 && b1 >= b2 && c1 >= c2)
    {
        printf("The first box is larger than the second one\n");
    }
    else
    {
        printf("Boxes are incomparable\n");
    }
    return EXIT_SUCCESS;
}
