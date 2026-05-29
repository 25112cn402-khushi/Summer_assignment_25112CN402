#include <iostream>
using namespace std;
int main(){
    int limit,i,a,b,c;
    cout<<"ENTER LIMIT:";
    cin>>limit;

    a=0;
    cout<<a<<"\n";
    b=1;
    cout<<b<<"\n";
    for(i=1;i<=limit-2;i++){
        c=a+b;
        cout<<c<<"\n";
        a=b;
        b=c;
    }
    return 0;
}