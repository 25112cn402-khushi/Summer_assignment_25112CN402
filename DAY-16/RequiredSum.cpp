#include <iostream>
using namespace std;
int main(){
  //intilaising required variables
    int sum,i,arr[50],n,j;
  //enter length of array
    cout<<"ENTER LENGTH:";
    cin>>n;

  //LOOP FOR ENTERING NUMBERS IN ARRAY
    for(i=0;i<n;i++){
        cout<<"ENTER NUMBER IN ARRAY:";
        cin>>arr[i];
    }
  //ENTER REQUIRED SUM
    cout<<"ENTER GETTING SUM:";
    cin>>sum;

  //LOOP RUN TILL N 
  for(i=0;i<n;i++){
    //FOR EVERY ITERATION OF i TO CHECK THE SUM
        for(j=0;j<n;j++){
          //CHECKING SUM
            if(arr[i]+arr[j]==sum){
              //PRINTING THE NUMBERS
                cout<<arr[i]<<" and "<<arr[j]<<"\n";
            }
        }
    }
    return 0;
}
