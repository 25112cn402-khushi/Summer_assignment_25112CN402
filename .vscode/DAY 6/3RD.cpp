#include <iostream>
using namespace std;
int main(){
    int r,num,i,sum=0,count=0;
    cout<<"ENTER NUMBER:";
    cin>>num;

    while(num!=0){
        r=num%2;
        sum=(sum*10)+r;
        num=num/2;
    }
    while(sum!=0){
        r=sum%10;
        if(r==1){
            count++;
        }
        sum=sum/10;
    }
    cout<<"SETS OF BIT IN NUMBER "<<count;
    return 0;
}