#include <iostream>
using namespace std;
int main(){
<<<<<<< HEAD
    int num,i;
    cout<<"ENTER NUMBER:";
    cin>>num;

    for(i=1;i<=num;i++){
        if(num%i==0){
            cout<<"FACTORS OF NUMBER :"<<i<<"\n";
        }
    }
    return 0;
=======
    int num1,num2,i,hcf;
    cout<<"ENTER 2 NUMBERS:";
    cin>>num1;
    cin>>num2;

    for(i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    cout<<"HCF OF "<<num1<<" AND "<<num2<<" IS "<<hcf;
    return 0;
    
>>>>>>> bad85ad8dacddf8f338d8d0794aa8fca8b11375d
}