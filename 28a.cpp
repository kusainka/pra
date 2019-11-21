#include <bits/stdc++.h>
using namespace std;
int main() {
double vklad,procent,temp;
cin>>vklad>>procent;
procent/=100;
for (int i=0;i<5;i++){
    vklad=vklad + vklad*procent;
}
cout<<vklad;
}
