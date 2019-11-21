#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,c;
cin>>a>>b>>c;
if ((a>=b)&&(a>=c)){
    if ((b>=c)){
        cout<<a<<" "<<b;
    } else {
        cout<<a<<" "<<c;  
    } 
} else 
if ((b>=a)&&(b>=c)){
    if ((a>=c)){
        cout<<b<<" "<<a;
    } else {
        cout<<b<<" "<<c;  
    }   
} else 
if ((c>=b)&&(c>=a)){
    if ((b>=a)){
        cout<<c<<" "<<b;
    } else {
        cout<<c<<" "<<a;  
    }
}
}
