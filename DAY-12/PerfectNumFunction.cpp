#include <iostream>
using namespace std;
//introducing function
void perfectnum(int num){
    int i,s ,dupl;
  //initialising dupl as num
    dupl=num;
    i=1;
    s=0;
  //loop till num
    for(i;i<num;i++){
      //checking factors of num
        if(num%i==0){
          //adding sum 
            s=s+i;
        }
    }
  //if sum is same as dupl
    if(s==dupl){
      //printing perfect number
        cout<<"ITS PERFECT NUMBER";
    }
  //otherwise
    else{
        cout<<"its not perfect number";
    }
}
int main(){
    int num;
  //input number
    cout<<"ENTER NUMBER:";
    cin>>num;

  //calling function
    perfectnum(num);
    return 0;
}
