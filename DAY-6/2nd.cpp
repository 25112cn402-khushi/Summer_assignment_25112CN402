#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int binarynum,s,product,r,count;
    cout<<"ENTER BINARY NUMBER:";
    cin>>binarynum;
    s=0;
    count=0;

    while(binarynum!=0){
        r=binarynum%10;
        s=s+(r*pow(2,count));
        count++;
        binarynum=binarynum/10;
    }
    cout<<"number:"<<s;
    return 0;
}
