#include <iostream>
using namespace std;
int  reversen(int num,int rev=0){
    if(num==0){
        return rev;}
    else{
        return reversen(num/10,((rev*10)+num%10));}
}
int main(){
    int num,reverse;
    cout<<"ENTER NUMBER:";
    cin>>num;

    reverse=reversen(num);
    cout<<reverse<<" is reverse of digits";
    return 0;
}
