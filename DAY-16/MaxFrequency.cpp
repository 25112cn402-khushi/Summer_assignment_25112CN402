#include <iostream>
using namespace std;
int main(){
  //initialising required variables
    int i,p,count,max,arrname[50],n;
  //enter length
    cout<<"ENTER LENGTH:";
    cin>>n;
  //max value initially is 0 
    max=0;

 //loop for entering numbers in array
    for(i=0;i<n;i++){
        cout<<"ENTER NUMBER IN ARRAY:";
        cin>>arrname[i];
    }
//loop for checking how many times number is present
    for(i=0;i<n;i++){
        count=0;
      //loop for checking same numbers
        for(int j=0;j<n;j++){
            if(arrname[i]==arrname[j]){
              //counting
                count++;
            }

        }
      //finding maximum number
      if(count>max){
            max=count;
            p=arrname[i];

        }
    }
  //printing
    cout<<p<<" is occuring  "<<count<<" times which is maximum";
    return 0;

}
