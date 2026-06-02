//palindrome check
#i/nclude <iostream>
using namespace  std;
 int main(){
    int num, s, reverse,num2;
    cout<<"ENTER NUMBER:";
    cin>>num;
    reverse=0;
    num2=num;

    while(num!=0){
        s=num%10;
        reverse=(reverse*10)+s;
        num=num/10;
    }
    
    if(reverse==num2){
        cout<<"its a palindome number";
    }
    else{
        cout<<"its not a palindome number";
    }
    
    return 0;
 }
