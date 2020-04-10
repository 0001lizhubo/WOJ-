//最小生成树 
#include<iostream>
#include<cstdio>
#include<cmath> 
#include<algorithm>
using namespace std;
const int max_nnnnn=105,max_mmmmm=5000;
int matrix[max_nnnnn][max_nnnnn];
struct edge_e{
	int x,y,c;
};
edge_e u[max_mmmmm];
int r[max_mmmmm];//边的序号
int p[max_nnnnn];//并查集
int n,t;
int cmp(const int i,const int j){
    return u[i].c<u[j].c;
}//间接排序函数 
int find(int a){
    while(a!=p[a])
    a=p[a];
    return a;
}//并查集的find函数 
int main(){
    int i,j,m=-1,ans;
    scanf("%d",&t);
    while(t--){
    	scanf("%d",&n);
        ans=0;m=-1;
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&matrix[i][j]);
        for(i=0;i<n;i++) 
            for(j=i+1;j<n;j++){
                m++;
				u[m].x=i;
				u[m].y=j;
				u[m].c=matrix[i][j];               
            }  
        for(i=0;i<n;i++)
        p[i]=i;
        for(i=0;i<=m;i++)
        r[i]=i;
        sort(r,r+m+1,cmp);
        for(i=0;i<=m;i++){
            int e=r[i];
            int x=find(u[e].x);
            int y=find(u[e].y);
            //找出当前边两个端点的所在集合编号 
            if(x!=y){
                ans+=u[e].c;
                p[x]=y;//如果在不同集合，合并 
            } 
        }
        printf("%d\n",ans);
    }
    return 0;
}