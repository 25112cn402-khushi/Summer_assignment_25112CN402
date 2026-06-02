#include <iostream>
using namespace std;
int sumofdigits(int num){
    if(num==0){
        return 0;}
    else{
        return num%10+ sumofdigits(num/10);}
}
int main(){
    int num,sum;
    cout<<"ENTER NUMBER:";
    cin>>num;

    sum=sumofdigits(num);
    cout<<sum<<"is sum of digits";
    return 0;
}