#include <iostream>
using namespace std;

//introducing function sum having 2 arguments
int sum(int a,int b){
  //c will contain result of sum
    int c;
  //sum operation
    c=a+b;
  //it will return value to main function
    return c;
}
int main(){
  //initialising 2 numbers
    int x,y;
  //input of 2 numbers
    cout<<"ENTER 1ST NUM:";
    cin>>x;
    cout<<"ENTER 2ND NUM";
    cin>>y;

  //calling function
    cout<<"SUM:"<<sum(x,y);
  
    return 0;
    
}
