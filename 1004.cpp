#include <bits/stdc++.h>
using namespace std;
#define yzzz 1e-9
double hss(double a, char *c)
{
    double k = 1.0;
    if (strcmp(c, "meters") == 0)
        k = 100.0;
    if (strcmp(c, "cubits") == 0)
        k = 45.72;
    if (strcmp(c, "feet") == 0)
        k = 30.48;
    if (strcmp(c, "inches") == 0)
        k = 2.54;
    a = a * k;
    return a;
}
int main()
{
    double length, w, h;
    double c[2] = {0.0, 0.0};
    char dlen[20], dw[20], dh[20];
    while (scanf("%lf", &length) != EOF)
    {
        /* code */
        cin >> dlen;
        cin >> w;
        cin >> dw;
        cin >> h;
        cin >> dh;
        c[0] = hss(length, dlen);
        c[1] = hss(w, dw);
        if (fabs(c[0] - c[1]) < yzzz)
            printf("Spin\n");
        else
        {
            if (fabs(c[0] - 6 * c[1]) < yzzz)
            {
                printf("Excellent\n");
            }
            else
            {
                printf("Neither\n");
            }
        }
        printf("\n");
    }
}