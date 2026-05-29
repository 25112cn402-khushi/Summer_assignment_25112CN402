#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,count,dupl,dupl1,r;
    cout<<"ENTER NUMBER:";
    cin>>num;
    for(int i=1;i<=num;i++){
        count=0;
        double s=0;
        dupl=i;
        dupl1=i;
        while(dupl1!=0){
            dupl1=dupl1/10;
            count++;
        }
        while(dupl!=0){
            r=dupl%10;
            s=s+round(pow(r,count));
            dupl=dupl/10;
    }
    if(i==s){
        cout<<i<<" is armstrong number\n";}
}
    return 0;
}