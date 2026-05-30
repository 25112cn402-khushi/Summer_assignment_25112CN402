#include <iostream>
using namespace std;
 int main(){ 
    int num,i,factorial;
    i=1;
    factorial=1;
    cout<<"ENTER NUMBER:";
    cin>>num;
    for(i;i<=num;i++){
        factorial=factorial*i;
    }
    cout<<"FACTORIAL OF "<<num<<" is "<< factorial;
    return 0;
}