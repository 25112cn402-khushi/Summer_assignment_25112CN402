#include <iostream>
using namespace std;
//introducing function
int rightrotate(int arr[], int size,int time){
    int i=0;
  //initialising last to the index of last element of array
    int last=size-1;
  //loop for how ma ny times to rotate right
    for(int j=0;j<time;j++){
      //initialising start to last terms of array
        int start=arr[last];
      //loop will run for last term for rotating right
        for(i=size-1;i>=0;i--){
          //rotating step method
            arr[i+1]=arr[i];
        }
      //1st term becomes equal to start
        arr[0]=start;

    }
  //printing array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
  //initialising required arrayname
    int time,arrname[50],i=0,size;
    cout<<"ENTER LENGTH:";
    cin>>n;
//enter rotation times
    cout<<"ENTER ROTATION TIME:";
    cin>>t;
//loop for enter the numbers in array
    for(i=0;i<n;i++){
        cout<<"ENTER NUMBERS IN ARRAY:";
        cin>>arrname[i];
    }
  //calling function
    rightrotate(arrname,n,t);
    return 0;

}
