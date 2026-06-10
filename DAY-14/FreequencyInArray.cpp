#include <iostream>
using namespace std;
//intoducing function
int frequency(int arr[],int size,int num){
  //counting the frequency 
    int count=0,i=0;
  //loop for counting the frequency
    for(i;i<size;i++){
      //checking
        if(num==arr[i]){
          //counting
            count++;
        }
    }
  //printing frequency
    cout<<"FREQUENCY OF "<<num<<" IS:"<<count;
    return 0;
}
int main(){
  //initialising arrayname and size 
    int n,arrname[50],i,num;
    cout<<"ENTER LENGTH OF ARRAY:";
    cin>>n;

  //entering number in array
    for(i=0;i<n;i++){
        cout<<"ENTER NUMBERS IN ARRAY:";
        cin>>arrname[i];
    }

    cout<<"ENTER NUMBER:";
    cin>>num;

  //calling function
    frequency(arrname,n,num);
    return 0;
}
