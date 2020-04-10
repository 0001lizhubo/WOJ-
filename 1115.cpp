#include <iostream>
#include <cstdio>
#include<cstdlib>
using namespace std;  
char f[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int BBBin[10];
int main(){
    int r,c,i,j;
    while(~scanf("R%dC%d%*c",&r,&c)){
        if(!r&&!c)break;
        int cnt=0;
        while(c){
            BBBin[cnt++]=c%26;
            if(BBBin[cnt-1]==0){
                BBBin[cnt-1]=26;
                c--;
            }
            c/=26;
        }
        for(i=cnt-1;i>=0;i--)
            printf("%c",f[BBBin[i]-1]);
            printf("%d\n",r);
    }
    return 0;
}