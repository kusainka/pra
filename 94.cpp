#include <bits/stdc++.h>
using namespace std;
int main(){
    double answer=0,i,n;
    cin>>n;
    for (i=1;i<=n;i++){
        answer+=(1/i);
    }
    cout<<answer;
    return 0;
}
