#include <bits/stdc++.h>
using namespace std;
int main() {
double vklad,procent,temp;
cin>>vklad>>procent;
procent/=100;
vklad=vklad+(vklad*procent)*5;
cout<<vklad;
}
