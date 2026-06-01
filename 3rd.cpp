#include <iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"ENTER NUMBER:";
    cin>>num;

    for(i=1;i<=num;i++){
        if(num%i==0){
            cout<<"FACTORS OF NUMBER :"<<i<<"\n";
        }
    }
    return 0;
}