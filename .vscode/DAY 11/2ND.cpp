#include <iostream>
using namespace std;
int max(int a ,int b){
    if(a>b){
        cout<<a<<" is greater";
    }
    else if(b>a){
        cout<<b<<" is greater";
    }
    else{
        cout<<"both are equal";
    }
    return 0;
}
int main(){
    int x,y;
    cout<<"ENTER 1ST NUM:";
    cin>>x;
    cout<<"ENTER 2ND NUM:";
    cin>>y;

    max(x,y);
    return 0;
}