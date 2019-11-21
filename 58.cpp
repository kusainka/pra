#include <bits/stdc++.h>
using namespace std;
int main(){
	int d1,m1,y1,d2,m2,y2;
	cin>>d1>>m1>>y1;
	cin>>d2>>m2>>y2;
    if (y2>y1){
        cout<<"yes";
    } else if (y2<y1){
        cout<<"no";
    } else if (y2==y1){
        if (m2>m1){
            cout<<"yes";
        } else if (m2<m1){
            cout<<"no";
        } else if (m2==m1){
            if (d2>d1){
                cout<<"yes";
            } else if (d2<d1){
                cout<<"no";
            } else if (d2==d1){
                cout<<"no";
            }
        }
    }
	return 0;
}
