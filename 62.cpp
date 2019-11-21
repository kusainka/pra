#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,c,e;
	cin>>n;
	a=(n/10000);
	c=(n/100)%10;
	e=(n%10);
	n=10000*a+c*100+e;
	cout<<n;
	return 0;
}
