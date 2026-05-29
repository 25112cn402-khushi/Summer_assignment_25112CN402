#include <iostream>
#include <cmath>
using namespace std;
void armstrong(int num){
    int r,s,dupl,dupl1,count=0;
    s=0;
    dupl=num;
    dupl1=num;
    while(num!=0){
        num=num/10;
        count++;
    }
    while(dupl!=0){
        r=dupl%10;
        s=s+round(pow(r,count));
        dupl=dupl/10;
    }
    if(round(s)==dupl1){
        cout<<"ITS ARMSTRONG NUMBER";
    }
    else{
        cout<<"ITS NOT ARMSTRONG ";
    }
}
int main(){
    int num;
    cout<<"ENTER NUMBER:";
    cin>>num;

    armstrong(num);
    return 0;
}