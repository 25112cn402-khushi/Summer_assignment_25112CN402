#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,i,sum,num1;
    cout<<"ENTER NUMBER:";
    cin>>num;
    sum=0;
    num1=num;

    for(i=1;i<=num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num1){
        cout<<"ITS PERFECT NUMBER";
    }
    else{
        cout<<"its not perfect number";
    }
    

    return 0;
}
