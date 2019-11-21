#include <bits/stdc++.h>
using namespace std;
int main () {
    int a,b,c;
    cin>>a>>b>>c;
    if (c<0) {
        cout<<"no";
    } else if (b<1 || b>12) {
        cout<<"no";
    } else {
        switch (b){
    case 1:
        if (a>=1 && a<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 2:
        if (a>=1 && a<=28)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 3:
        if (a>=1 && a<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 4:
        if (a>=1 && a<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 5:
        if (a>=1 && a<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 6:
        if (a>=1 && a<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 7:
        if (a>=1 && a<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 8:
        if (a>=1 && a<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 9:
        if (a>=1 && a<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 10:
        if (a>=1 && a<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 11:
        if (a>=1 && a<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 12:
        if (a>=1 && a<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    }
    }
return 0;
}
