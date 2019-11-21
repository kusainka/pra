#include <bits/stdc++.h>
using namespace std;
int main(){
    double answer=0,i;
    for (i=3;i<=111;i=i+2){
        answer+=cos(i/(i+2));
    }
    cout<<answer;
    return 0;
}
