#include<iostream>
using namespace std;
#include<algorithm>
// #define min(x,y) (x)<(y)?(x):(y)
int dp_11[2001][2001],cost_3[2001];
char s[2001],c;
int main(){
	int i,j,m,n,a,b;
    cin>>n>>m>>s+1;
 	for(i=1;i<=n;i++){
    	cin>>c>>a>>b;
  		cost_3[c-'a']=min(a,b);
 	}
    for(i=m-1;i>=1;i--)
 	for(j=i+1;j<=m;j++){
        if(s[i]==s[j])
   			dp_11[i][j]=dp_11[i+1][j-1];
  		else{
        	a=dp_11[i+1][j]+cost_3[s[i]-'a'];
   			b=dp_11[i][j-1]+cost_3[s[j]-'a'];
   			dp_11[i][j]=min(a,b);
  		}
 	}
 	cout<<dp_11[1][m]<<endl;
 	return 0;
}