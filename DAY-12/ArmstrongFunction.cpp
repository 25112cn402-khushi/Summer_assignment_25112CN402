#include <iostream>
#include <cmath>
using namespace std;
//introducing armstrong function named num
void armstrong(int num){
    int r,s,dupl,dupl1,count=0;
   //initilising sum as 0
    s=0;
  //initialising dupl and dupl1 as num
    dupl=num;
    dupl1=num;
  //loop till num not equals to 0
    while(num!=0){
      //for counting number of value by reducing it 10
        num=num/10;
        count++;
    }
  //loop till dupl nit equals to 0
    while(dupl!=0){
      //remainder of num
        r=dupl%10;
      //armstrong method to power the r by count
        s=s+round(pow(r,count));
      //reducing dupl num by 10
        dupl=dupl/10;
    }
  //checking armstrong
    if(round(s)==dupl1){
        cout<<"ITS ARMSTRONG NUMBER";
    }
    else{
        cout<<"ITS NOT ARMSTRONG ";
    }
}
int main(){
    int num;
  //input number
    cout<<"ENTER NUMBER:";
    cin>>num;

  //calling function
    armstrong(num);
    return 0;
}
