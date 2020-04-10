#include <bits/stdc++.h>
using namespace std;
int in[1003],out[1003];
int comp(const void*a,const void*b){
	return *(int*)a-*(int*)b;
}
int main(){
	int t,n,i,j;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		for(j=0;j<n;j++){
			scanf("%d",&in[j]);
		}
		for(j=0;j<n;j++){
			if(j==0)
			out[0]=in[0];
			else
			out[j]=in[j]-in[j-1];
		}
		qsort(out,n,sizeof(int),comp);
		printf("Case %d:\n",i+1);
		for(j=0;j<n;j++){
			printf("%d",out[j]);
			if(j!=n-1)
			cout<<" ";
		}
		if(i!=t-1)
		printf("\n\n");
	}
} 