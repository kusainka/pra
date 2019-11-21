#include <iostream>
using namespace std;
int main () {
    int a,b,c;
    int counter=0;
    cin>>a>>b>>c;
    if (a<5)
        counter++;
    if (b<5)
        counter++;
    if (c<5)
        counter++;
    if (counter==2)
        cout<<"yes";
    else
        cout<<"no";

return 0;
}
