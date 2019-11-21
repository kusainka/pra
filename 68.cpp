#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,x;
    cin>>a>>b>>c;
    if ((b*b - 4*a*c)>0){
        if (a==0){
            x=-c/b;
            cout<<x;
        } else {
        x=(-1*b+sqrt(b*b-4*a*c))/(2*a);
        cout<<x<<endl;
        x=(-1*b-sqrt(b*b-4*a*c))/(2*a);
        cout<<x<<endl;
        }
    } else if((b*b - 4*a*c)==0){
        if (a==0 && b==0){
            cout<<"No Answer";
        } else {
        x=(-1*b/(2*a)) ;
        cout<<x<<endl;
        }
    } else {
        cout<<"Roots are complex"<<endl;
    }
    return 0;
}
