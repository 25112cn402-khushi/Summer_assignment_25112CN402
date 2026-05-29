#include <iostream>
using namespace std;
int main(){
    int num,i,result;
    cout<<"ENTER NUMBER:";
    cin>>num;
    result=0;

    for(i=1;i<num;i++){
        if(num%i==0){
            result=result+i;
        }
    }
    if(result==num){
        cout<<"It's perfect number";
    }
    else{
        cout<<"It's not perfect number";
    }
    return 0;
}