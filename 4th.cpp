#include <iostream>
using namespace std;
int main(){
<<<<<<< HEAD
    int num,i,count=0,max=0,prime;
    cout<<"ENTER NUMBER:";
    cin>>num;

    for(i=1;i<=num;i++){
        if(num%i==0){
            count=0;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count==2){
                if(max<i){
                    max=i;
                }
            }    
        }
    }
    cout<<max;
    return 0;
=======
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
    
>>>>>>> bad85ad8dacddf8f338d8d0794aa8fca8b11375d
}