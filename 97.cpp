#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,answer=0,temp;
    cin>>n;
    for (int i=1;i<=n;i++){
        temp=1;
        for (int j=i;j<=2*i;j++){
            temp*=j;
        }
        answer+=temp;
    }
    cout<<answer<<endl;
    return 0;
}
