//reverse of a number
#include <iostream>
using namespace  std;
 int main(){
    int num, s, reverse;
    cout<<"ENTER NUMBER:";
    cin>>num;
    reverse=0;

    while(num!=0){
        s=num%10;
        reverse=(reverse*10)+s;
        num=num/10;
    }
    cout<<"reverse is:"<<reverse;
    return 0;
 }