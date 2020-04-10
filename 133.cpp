#include <bits/stdc++.h>
using namespace std;
int n,summmmmmmmmmmmmmmm,candy[10000][3],ko[3][3];
void find_max2(int x,int y){
	int i,max2=0;
	for(i=0;i<n;i++){
		if(y==1){
			if(i==ko[x][0])
			continue;
		}
		else if(y==2){
			if(i==ko[x][0]||i==ko[x][1])
			continue;
		}
		if(candy[i][x]>max2){
			max2=candy[i][x];
			ko[x][y]=i;
		}
	}
}
int main(){
	int i,j,k,min,temp;
	while(scanf("%d",&n)==1){
		summmmmmmmmmmmmmmm=0;
		for(i=0;i<n;i++){
			scanf("%d %d %d",&candy[i][0],&candy[i][1],&candy[i][2]);
			summmmmmmmmmmmmmmm=summmmmmmmmmmmmmmm+candy[i][0]+candy[i][1]+candy[i][2];
		}
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		find_max2(i,j);	
		min=0x7fffffff;
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		for(k=0;k<3;k++){
			if(ko[0][i]==ko[1][j]||ko[0][i]==ko[2][k]||ko[1][j]==ko[2][k])
			continue;
			temp=summmmmmmmmmmmmmmm-candy[ko[0][i]][0]-candy[ko[1][j]][1]-candy[ko[2][k]][2];
			if(temp<min)
			min=temp; 
		}
		cout<<min<<endl;
	}
	return 0;
}  