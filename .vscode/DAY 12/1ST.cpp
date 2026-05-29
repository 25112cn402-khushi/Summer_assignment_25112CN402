#include <iostream>
using namespace std;
void palindrome(int num){
    int r,sum=0,dupl;
    dupl=num;
    while(num!=0){
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    if(sum==dupl){
        cout<<"PALINDROME";
    }
    else{
        cout<<"NOT PALINDROME";
    }
}
int main(){
    int num;
    cout<<"ENTER NUMBER:";
    cin>>num;

    palindrome(num);
    return 0;
}