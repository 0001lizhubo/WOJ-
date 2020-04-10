// woj 1314cpp
#include <stdio.h>
#include <stdlib.h>
int summmx(int a)
{
    int i = 1;
    while (a != 1)
    {
        if (a % 2 == 0)
            a = a / 2;
        else
            a = a * 3 + 1;
        i++;
    }
    return i;
}
int main()
{
    int a, b, c, max, j, i;
    while (scanf("%d %d", &a, &b))
    {
        /* code */
        if (a == 0 && b == 0)
        {
            break;
        }
        int y = b - a + 1;
        int sum[y];
        for (i = 0; i < y; ++i)
            sum[i] = 0;
        i = 0;
        while (a <= b)
        {
            sum[i] = summmx(a);
            a++;
            i++;
        }
        max = sum[0];
        for (int i = 0; i < y; i++)
        {
            if(sum[i]>max) max=sum[i];

        }
        printf("%d\n", max);
    }
}