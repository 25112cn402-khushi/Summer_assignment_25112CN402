#include <iostream>
using namespace  std;
 int main(){
    int num, s, r , sum;
    cout<<"ENTER NUMBER:";
    cin>>num;
    sum=0;

    while(num!=0){
        s=num%10;
        sum=sum+s;
        num=num/10;
    }
    cout<<"sum is:"<<sum;
    return 0;
 }