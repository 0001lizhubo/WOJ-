#include <bits/stdc++.h>
using namespace std;
int n, l;
int main()
{
    int i, cnt, nummmm_11, s, flag;
    while (scanf("%d %d", &n, &l) != EOF)
    {
        cnt = 0;
        for (i = 1;; i++)
        {
            nummmm_11 = i;
            flag = 1;
            while (nummmm_11 > 0)
            {
                s = nummmm_11 % 10;
                if (s == l)
                {
                    flag = 0;
                    break;
                }
                nummmm_11 = nummmm_11 / 10;
            }
            if (flag)
            {
                cnt++;
                if (cnt == n)
                    break;
            }
            else
                continue;
        }
        cout << i << endl;
    }
    return 0;
}