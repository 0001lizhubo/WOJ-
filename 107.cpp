#include <bits/stdc++.h>
using namespace std;
int len1, len2;
int w[5][5] = {{5, -1, -2, -1, -3}, {-1, 5, -3, -2, -4}, {-2, -3, 5, -2, -2}, {-1, -2, -2, 5, -1}, {-3, -4, -2, -1, 0}};
char s1[105], s2[105];
int v[105][105];
int mats(char c)
{
    switch (c)
    {
    case 'A':
        return 0;
        break;
    case 'C':
        return 1;
        break;
    case 'G':
        return 2;
        break;
    case 'T':
        return 3;
        break;
    default:
        return 4;
        break;
    }
}
int wisssss(char a,char b){
    int i, j;
    i = mats(a);
    j = mats(b);
    return w[i][j];
}

int max3(int a,int b ,int c){
    return c>((a>b)?a:b)?c:((a>b)?a:b);
}
int main(){
    int t, i, j, tmp, maxxxx;
    cin >> t;
    while (t--)
    {
        scanf("%d %s %d %s", &len1, &s1, &len2, &s2);
        maxxxx = -500;
        v[0][0]=0;
		for(i=1;i<=len1;i++)v[i][0]=wisssss(s1[i-1],'-')+v[i-1][0];
		for(i=1;i<=len2;i++)v[0][i]=wisssss('-',s2[i-1])+v[0][i-1];
		for(i=1;i<=len1;i++)
		for(j=1;j<=len2;j++){
			v[i][j]=max3(v[i-1][j-1]+wisssss(s1[i-1],s2[j-1]),v[i][j-1]+wisssss('-',s2[j-1]),v[i-1][j]+wisssss('-',s1[i-1]));
		}
		maxxxx=v[i-1][j-1];
        cout << maxxxx << endl;

    }
    
}