#include <iostream>

int main(int argc, char* argv[])
{
    int l1 = 0;
    int w1 = 0;
    int h1 = 0;
    int l2 = 0;
    int w2 = 0;
    int h2 = 0; 
    int lc = 0;
    int wc = 0;
    int hc = 0;

    scanf_s("%d", &l1);
    scanf_s("%d", &w1);
    scanf_s("%d", &h1);
    scanf_s("%d", &l2);
    scanf_s("%d", &w2);
    scanf_s("%d", &h2);
    scanf_s("%d", &lc);
    scanf_s("%d", &wc);
    scanf_s("%d", &hc);

    if (l1 < w1) 
    {
        int temp = l1; 
        l1 = w1; 
        w1 = temp;
    }

    if (l2 < w2) 
    {
        int temp = l2;
        l2 = w2;
        w2 = temp;
    }

    if (lc < wc) 
    {
        int temp = lc;
        lc = wc;
        wc = temp;
    }

    if (h1 > hc || h2 > hc) 
    {
        printf("NO");
        return 0;
    }

    else if ((l1 + l2 <= lc && w1 <= wc && w2 <= wc) || // ящики р€дом по длине
            (w1 + w2 <= wc && l1 <= lc && l2 <= lc) || // ящики р€дом по ширине
            (l1 + l2 <= wc && w1 <= lc && w2 <= lc) || // ящики р€дом по ширине (поворот)
            (w1 + w2 <= lc && l1 <= wc && l2 <= wc))   // ящики р€дом по длине (поворот)
    {
        printf("YES");
        return 0;
    }
    else if ((l1 <= lc && w1 <= wc && h1 + h2 <= hc) || // ѕервый €щик в контейнере
            (l2 <= lc && w2 <= wc && h1 + h2 <= hc) || // ¬торой €щик в контейнере
            (l1 <= wc && w1 <= lc && h1 + h2 <= hc) || // ѕервый €щик с поворотом
            (l2 <= wc && w2 <= lc && h1 + h2 <= hc))   // ¬торой €щик с поворотом
    {
        printf("YES");
        return 0;
    }

    printf("NO");
    return EXIT_SUCCESS;
}
