#include <bits/stdc++.h>
using namespace std;
int main(){
	string n,temp;
	cin>>n;
	for (int i=0;i<n.length();i++)
	    if (n[i]>='0' && n[i]<='4')
	        temp+=n[i];
	for (int i=0;i<n.length();i++)
	    if (n[i]>='5' && n[i]<='9')
	        temp+=n[i];
	cout<<temp;
	return 0;
}
