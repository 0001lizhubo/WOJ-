#include<stdio.h>
int basbdnajsdjh[101][101];
int main(){
	int i,j;
	for(i=0;i<101;i++)
	basbdnajsdjh[0][i]=1;
	for(i=0;i<101;i++)
	basbdnajsdjh[1][i]=1;
	for(i=2;i<101;i++)
	basbdnajsdjh[i][0]=1;
	for(i=2;i<101;i++)
	basbdnajsdjh[i][1]=1;
	for(i=2;i<101;i++)
	for(j=2;j<101;j++)
	if(i>=j) 
	basbdnajsdjh[i][j]=basbdnajsdjh[i-j][j]+basbdnajsdjh[i][j-1];
	else
	basbdnajsdjh[i][j]=basbdnajsdjh[i][i]; 
	while(scanf("%d %d",&i,&j)!=EOF){
		printf("%d\n",basbdnajsdjh[i][j]);
	}
	return 0;
} 