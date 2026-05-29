#include <iostream>
using namespace std ;
int main(){
    int n, i, count;
    cout<<"enter n:";
    cin>>n;
    i=1;
    count=0;
    for(i;i<=n;i++){
        if(n%i==0){
            count++;}
    }
    if(count==2){
        cout<<n<<"  prime number";
    }
    else{
        cout<<n<<" not prime";
    }
    return 0;
}