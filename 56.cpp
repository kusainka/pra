#include <iostream>
using namespace std;
int main () {
    int a,N;
    cin>>a>>N;
    if (a==11){
        switch (N){
        case 0: cout<<"North";
        break;
        case 1: cout<<"West";
        break;
        case -1: cout<<"East";
        break;
        }
    }
    if (a==12){
        switch (N){
        case 0: cout<<"West";
        break;
        case 1: cout<<"South";
        break;
        case -1: cout<<"North";
        break;
        }
    }
    if (a==13){
        switch (N){
        case 0: cout<<"South";
        break;
        case 1: cout<<"East";
        break;
        case -1: cout<<"West";
        break;
        }
    }
    if (a==14){
        switch (N){
        case 0: cout<<"East";
        break;
        case 1: cout<<"North";
        break;
        case -1: cout<<"South";
        break;
        }
    }

return 0;
}
