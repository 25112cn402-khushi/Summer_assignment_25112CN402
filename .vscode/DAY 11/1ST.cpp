#include <iostream>
using namespace std;

int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int x,y;
    cout<<"ENTER 1ST NUM:";
    cin>>x;
    cout<<"ENTER 2ND NUM";
    cin>>y;

    cout<<"SUM:"<<sum(x,y);
    return 0;
    
}