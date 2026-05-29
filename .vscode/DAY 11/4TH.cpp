#include <iostream>
using namespace std;
int factorial(int num){
    int fact=1,i;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"factorial of "<<num<<" is:";
    return fact;
}
int main(){
    int num;
    cout<<"ENTER NUMBER:";
    cin>>num;

    cout<<factorial(num);
}