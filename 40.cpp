#include <bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
if ((a>-10)&&(a<10)){
    a+=5;
    cout<<a;
} else {
    a-=10;
    cout<<a;
}
}
