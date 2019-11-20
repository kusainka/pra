#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c,d;
	cin>>n;
	a=(n/1000);
	b=(n/100)%10;
	c=(n/10)%10;
	d=(n%10);
	if ((a>b)&&(b>c)&&(c>d))
	    cout<<"yes";
	else 
	    cout<<"no";
	return 0;
}
