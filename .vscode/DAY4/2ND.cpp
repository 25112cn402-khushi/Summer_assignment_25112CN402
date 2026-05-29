#include <iostream>
using namespace std;
int main(){
    int nth,i,a,b,c;
    cout<<"ENTER nth term:";
    cin>>nth;

    a=0;
    b=1;
    for(i=1;i<=nth-2;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<"Nth term is:"<<c<<"\n";
    return 0;
}