#include <iostream>
using namespace std;
 int main(){
    int num, i, product;
    i=1;
    cout<<"ENTER NUMBER:";
    cin>>num;
    for(i;i<=10;i++){
        product=num*i;
        cout<<num<<"*"<<i<<"="<<product<<"\n";
    }
    return 0;}