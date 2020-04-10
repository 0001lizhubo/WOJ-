#include <bits/stdc++.h>
using namespace std;
const int N = 1050;
int dp[N][11],k[11],q[2][N],w[12][12],f[N];
char s[11][11];
int compare(int x,int y)
{
    int i,j,maxz=0;
    for(i = 0 ; i < k[x] ; i++)
        for(j = 0 ; j < k[y] ; j++)
        {
            if(s[x][i]==s[y][j])
            {
                int ii = i+1,jj = j+1,o=1;
                while(ii<k[x]&&jj<k[y])
                {
                    if(s[x][ii]==s[y][jj])
                    o++;
                    ii++;jj++;
                }
                maxz = max(o,maxz);
            }
        }
    return maxz;
}
int main()
{
    int i,j,n,e,o;
    while(scanf("%d%*c",&n)&&n)
    {
        int kkkkasdkask=0;
        memset(w,0,sizeof(w));
        memset(dp,128,sizeof(dp));
        memset(f,0,sizeof(f));
        for(i = 0; i < n ; i++)
        {
            scanf("%s",s[i]);
            k[i] = strlen(s[i]);
        }
        for(i =0 ; i < n ;i++)
        {
            q[0][i] = 1<<i;
            dp[1<<i][i] = 0;
        }
        kkkkasdkask = n;
        for(i =0; i < n ; i++)
            for(j = i+1; j < n ; j++)
            {
                w[i][j] = compare(i,j);
                w[j][i] = w[i][j];
            }
        for(i = 1 ; i < n ; i++)
        {
            int tt=0;
            for(j = 0 ; j < kkkkasdkask ; j++)
            {
                for(e = 0 ; e < n ; e++)
                {
                    for(o = 0 ; o < n ; o++)
                    {
                        if(((~q[(i-1)%2][j])&(1<<o))==0)
                        continue;
                        int oo = q[(i-1)%2][j]+(1<<o);
                        if(o==e)
                        continue;
                        dp[oo][o] = max(dp[oo][o],dp[q[(i-1)%2][j]][e]+w[e][o]);
                        if(!f[oo])
                        {
                            q[i%2][tt++] = oo;
                            f[oo] = 1;
                        }
                    }
                }
            }
            kkkkasdkask = tt;
        }
        int ans = 0;
        for(i = 0 ; i < n ;i++)
        ans = max(ans,dp[(1<<n)-1][i]);
        printf("%d\n",ans);
    }
    return 0;
}