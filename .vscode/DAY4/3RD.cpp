#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,count,dupl,dupl1,r,s;
    cout<<"ENTER NUMBER:";
    cin>>num;
    count=0;
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
    if(dupl1==round(s)){
        cout<<"its armstrong number";}
    else{
        cout<<"its not armstrong number";
    }
    return 0;
}