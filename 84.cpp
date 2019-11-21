#include <bits/stdc++.h>
using namespace std;
int main(){
    double dollar,i;
    cin>>dollar;
    for (i=1; i<101;i++){
        cout<<i<<"$ - "<<(i*dollar)<<" p - "<<(i*dollar/20)<<" kg"<<endl;
    }
    return 0;
}
