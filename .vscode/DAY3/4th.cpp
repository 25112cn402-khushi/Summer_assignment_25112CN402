#include <iostream>
using namespace std;
int main(){
    int num1,num2,i, lcm,hcf;
    cout<<"ENTER NUM1";
    cin>>num1;

    cout<<"ENTER NUM2";
    cin>>num2;

    lcm=1;
    for(i=2;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;

        }
    }
    lcm=((num1*num2)/hcf);
    cout<<"LCM of "<<num1<<" and "<<num2<<"  is "<<lcm;
    return 0;
}
    