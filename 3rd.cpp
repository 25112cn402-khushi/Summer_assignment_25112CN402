//product of digit
#include <iostream>
using namespace  std;
 int main(){
    int num, s,product;
    cout<<"ENTER NUMBER:";
    cin>>num;
    product =1;

    while(num!=0){
        s=num%10;
        product=product*s;
        num=num/10;
    }
    cout<<"product is:"<<product;
    return 0;
 }