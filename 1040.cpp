#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, ans = 0;
    map<int, int> count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        count.clear();
        ans = 0;
        while (n-->0)
        {
            cin >> i;
            ++count[i];
        }
        map<int, int>::iterator it = count.begin();
        for (; it!= count.end(); it++)
        {
            /* code */
            if(it->second>ans)
                ans = it->second;
        }
        printf("%d\n", ans);
    }
    return 0;
}