#include <iostream>
using namespace std;
int main(){
    int num,dupl, i,s,fact,r;
    cout<<"ENTER NUMBER:";
    cin>>num;
    dupl=num;
    s=0;

    while(num!=0){
        r=num%10;
        fact=1;
        for(i=1;i<=r;i++){
            fact=fact*i;
        }
        s=s+fact;
        num=num/10;
    }
    if(s==dupl){
        cout<<"It's a strong number";
    }
    else{
        cout<<"its not strong number";

    return 0;
}
