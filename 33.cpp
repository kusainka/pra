#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if (y<0)
    cout<<"y is negative";
else if ((x-sqrt(y))<0)
    cout<<"no Answer";
else 
    cout<<sqrt(x-sqrt(y));
}
