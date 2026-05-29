#include <iostream>
using namespace std;
void fibonacci(int nth){
    int a,b,c;
    a=0;
    b=1;
    cout<<"1st  term:"<<a<<"\n";
    cout<<"2nd  term:"<<b<<"\n";
    for(int i=1;i<=nth-2;i++){
        c=a+b;
        cout<<i<<"th  term:"<<c<<"\n";
        a=b;
        b=c;
    }
}
int main(){
    int nth ;
    cout<<"ENTER NTH :";
    cin>>nth;

    fibonacci(nth);
    return 0;
}