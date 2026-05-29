#include <iostream>
using namespace std;
int main(){
    int num1,num2,i, hcf;
    cout<<"ENTER NUM1";
    cin>>num1;

    cout<<"ENTER NUM2";
    cin>>num2;

    for(i=2;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;

        }
    }
    cout<<"HCF of "<<num1<<" and "<<num2<<"  is "<<hcf;
    return 0;
    
}