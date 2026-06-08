#include <iostream>
using namespace std;
//introducing fibonacci function
void fibonacci(int nth){
    int a,b,c;
  //INTIALISING a=0 abd b=1
    a=0;
    b=1;
  //if n==1 print a
  if(n==1){
    cout<<"1st  term:"<<a<<"\n";}
  //if n==2 print a and b
  elseif(n==2){
    cout<<"1st term:"<<a<<"\n";
    cout<<"2nd  term:"<<b<<"\n";}
  else{
    cout<<"1st term:"<<a<<"\n";
    cout<<"2nd  term:"<<b<<"\n";
    for(int i=1;i<=nth-2;i++){
        c=a+b;
        cout<<i<<"th  term:"<<c<<"\n";
        a=b;
        b=c;
    }}
}
int main(){
    int nth ;
  //input n
    cout<<"ENTER NTH :";
    cin>>nth;
 //calling function
    fibonacci(nth);
    return 0;
}
