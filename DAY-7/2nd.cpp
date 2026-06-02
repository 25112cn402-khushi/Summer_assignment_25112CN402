#include <iostream>
using namespace std;
int fibonacci(int num){
    if(num==0){
        return 0;
    }
    else if(num==1){
        return 1;
    }  
    else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
}
int main(){
    int num,i,c;
    cout<<"ENTER NUMBER:";
    cin>>num;
    
    for(i=0;i<num;i++){
        c=fibonacci(i);
        cout<<c<<"\n";
    }
    return 0;
}
