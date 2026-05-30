#include <iostream>
using namespace std;
 int main(){
    int num,i,sum;
    cout<<"ENTER NUMBER:";
    cin>>num;
    i=1;
    sum=0;
    for(i;i<=num;i++){
        sum=sum+i;
    }
    cout<<"SUM:"<<sum;
    return 0;
 }