#include <iostream>
using namespace std;
int main(){
    int num1,num2,i,hcf,lcm;
    cout<<"ENTER 2 NUMBERS:";
    cin>>num1;
    cin>>num2;

    for(i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    lcm=(num1*num2)/hcf;
    cout<<"LCM OF "<<num1<<" AND "<<num2<<" IS "<<lcm;
    return 0;
    
}