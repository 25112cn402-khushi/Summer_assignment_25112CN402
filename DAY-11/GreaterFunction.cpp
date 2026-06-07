#include <iostream>
using namespace std;
//introducing function named max having 2 inputs
int max(int a ,int b){
  //if 1st number is greater than
    if(a>b){
     //print 1st is greater
        cout<<a<<" is greater";
    }
  //if 2nd number is greater
    else if(b>a){
      //print 2nd is greater
        cout<<b<<" is greater";
    }
    //if both will not run than it go to else statements
    else{
      //printing they must be equal
        cout<<"both are equal";
    }
  //back to main function
    return 0;
}
int main(){
  //initialising 2 numbers
    int x,y;
  //input of 2 numbers
    cout<<"ENTER 1ST NUM:";
    cin>>x;
    cout<<"ENTER 2ND NUM:";
    cin>>y;

  //calling function
    max(x,y);
    return 0;
}
