#include <bits/stdc++.h>
using namespace std;
int main(){
    double answer=0,i;
    for (i=2;i<=9;i++){
        answer+=(i/(i+1));
    }
    cout<<answer;
    return 0;
}
