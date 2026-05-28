#include <iostream>
using namespace std;
 int main(){
    int num ,num2, count;
    count=0;
    cout<<"enter number:";
    cin>>num;
    num2=num;
     
    while(num!=0){
        num=num/10;
        count++;
    }
    cout<<"number of digits in "<<num2<<" is "<< count;
    return 0;
}