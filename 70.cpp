#include <bits/stdc++.h>
using namespace std;
int main(){
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    bool check1=true,check2=true;

    if (x1==x2)
        x4=x3;
    else if (x1==x3)
        x4=x2;
    else if (x2==x3)
        x4=x1;
    else 
        check1=false;
    
    if (y1==y2)
        y4=y3;
    else if (y1==y3)
        y4=y2;
    else if (y2==y3)
        y4=y1;
    else 
        check2=false;
    
    if ((check1==false)||(check2==false))
        cout<<"Incorrect Coordinates";
    else
        cout<<x4<<" "<<y4;
    return 0;
}
