#include <bits/stdc++.h>
using namespace std;
int main(){
    int answer=0;
    for (int i=1;i<=112;i=i+3){
        answer+=i;
    }
    cout<<answer;
    return 0;
}
