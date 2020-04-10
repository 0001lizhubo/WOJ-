#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main(){
	float d,h,a,b,c,ans;
	int ajsdhjsadn_99as9dj9asd;
	cin>>d>>h;
	while(scanf("%f %f %f",&a,&b,&c)==3){
		if(a<=0||b<=0||c<=0)
		break;
		a=a/180*pi;
		b=b/180*pi;
		c=c/180*pi;
		ans=sin(b)*sqrt(2*d*d/(sin(b)*sin(b)/sin(a)/sin(a)+sin(b)*sin(b)/sin(c)/sin(c)-2));
		ajsdhjsadn_99as9dj9asd=ans+h+0.5;
		printf("%d\n",ajsdhjsadn_99as9dj9asd);		
	}
	return 0;
} 