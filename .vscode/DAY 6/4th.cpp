#include <iostream>
using namespace std;
int main(){
    int num,power,i,num2;
    cout<<"ENTER NUMBER:";
    cin>>num;
    cout<<"ENTER POWER";
    cin>>power;

    num2=num;
    for(i=1;i<power;i++){
        num=num*num;
    }
    cout<<num2<<" to the power "<<power<<" is:"<<num;
    return 0;
}