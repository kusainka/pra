#include <bits/stdc++.h>
using namespace std;
int main(){
    double h,m;
    cin>>h>>m;
    if (h>12)
        h-=12;
    h=(h*60+m)*0.5;
    m*=6;
    cout<<abs(h-m);
}
