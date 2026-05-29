#include <iostream>
using namespace std;
int prime(int num){
    int count,i;
    count=0;
    for(i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<num<<" is prime";
    }
    else{
        cout<<num<<" is composite";
    }
    return 0;
}
int main(){
    int num;
    cout<<"ENTER NUMBER:";
    cin>>num;

    prime(num);
    return 0;
}