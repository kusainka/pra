#include <bits/stdc++.h>
using namespace std;
int main() {
int d;
double p,s;
cin>>d>>p>>s;
    p/=100;
    for (int i=0;i<d;i++){
        s+=3;
        s+=(s*p);
    }
    cout<<s;
}
