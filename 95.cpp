#include <bits/stdc++.h>
using namespace std;
int main(){
    double p=1,i,a,n;
    cin>>a>>n;
    for (i=1;i<=n;i++){
        p*=(a+i)*(a+i);
    }
    cout<<p;
    return 0;
}
