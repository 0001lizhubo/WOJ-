#include <bits/stdc++.h>
using namespace std;
int main(void){
    int result, asudhahdihuahda[2], ajhksdahudheihdiahbs[2];
    int t,N,tiiiii;
    cin>>t;
    for(tiiiii=1;tiiiii<=t;tiiiii++){
        scanf("%d", &N);
        scanf("%d %d", &asudhahdihuahda[0], &asudhahdihuahda[1]);
        scanf("%d %d", &ajhksdahudheihdiahbs[0], &ajhksdahudheihdiahbs[1]);
        if(abs(asudhahdihuahda[0]-ajhksdahudheihdiahbs[0])%2 == abs(asudhahdihuahda[1]-ajhksdahudheihdiahbs[1])%2){
            if(abs(asudhahdihuahda[0]-ajhksdahudheihdiahbs[0]) >= abs(asudhahdihuahda[1]-ajhksdahudheihdiahbs[1])){
                result = abs(asudhahdihuahda[0]-ajhksdahudheihdiahbs[0]);
            }
            else{
                result = abs(asudhahdihuahda[1]-ajhksdahudheihdiahbs[1]);
            }
        }
        else{
            result = -1;
        }
        if(tiiiii!=1)printf("\n");
        printf("Case %d:\n%d\n",tiiiii, result);    
    }
    return 0;
}