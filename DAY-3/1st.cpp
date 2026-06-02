#include <iostream>
using namespace std;
int main(){
    int num,count=0,i;
    cout<<"ENTER NUMBER:";
    cin>>num;

    for(i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"ITS PRIME NUMBER";
    }
    else{
        cout<<"ITS COMPOSITE NUMBER";
    }
    return 0;
}
