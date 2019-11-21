#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,a1,b1,c1;
    cin>>a>>b>>c;
    a1=a+b;
    b1=c-a;
    c1=a+b+c;
    a=a1;
    b=b1;
    c=c1;
    cout<<a<<" "<<b<<" "<<c;
}
