#include <iostream>
using namespace std;
using namespace std;
int main(){
    int r,num,i,sum=0,binary=0,t ;
    cout<<"ENTER NUMBER:";
    cin>>num;

    while(num!=0){
        r=num%2;
        sum=(sum*10)+r;
        num=num/2;
    }
    while(sum!=0){
        t=sum%10;
        binary=(binary*10)+t;
        sum=sum/10;
    }
    cout<<"binary is "<<binary<<"\n";
    return 0;
}