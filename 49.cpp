#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,c,d;
cin>>a>>b>>c>>d;
if (a%2!=0)
    a=INT_MIN;
if (b%2!=0)
    b=INT_MIN;
if (c%2!=0)
    c=INT_MIN;
if (d%2!=0)
    d=INT_MIN;

if ((a>b)&&(a>c)&&(a>d))
    cout<<a;
else 
if ((b>a)&&(b>c)&&(b>d))
    cout<<b;
else 
if ((c>a)&&(c>b)&&(c>d))
    cout<<c;
else 
if ((d>a)&&(d>b)&&(d>c))
    cout<<d;
else 
cout<<"not found";
}
