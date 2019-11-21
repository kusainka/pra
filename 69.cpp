#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,p;
    cin>>a>>b>>c;
    if ((a+b>c) && (a+c>b) && (b+c>a)){
        p=(a+b+c)/2;
        cout<<sqrt(p*(p-a)*(p-b)*(p-c));
    } else {
        cout<<"Incorrect values for triangle sides";
    }
    return 0;
}
