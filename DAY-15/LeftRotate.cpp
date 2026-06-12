#include <iostream>
using namespace std;
//introducing function
int leftrotate(int arr[], int size,int time){
  //initialising last to the index of last element of array
    int i=0;
    int last=size-1;
  //loop will run till how many times to rotate
    for(int j=0;j<time;j++){
      //let start equals to 1st element to array
        int start=arr[0];
      //loop for moving array to left
        for(i=0;i<size;i++){
          //moving to left
            arr[i]=arr[i+1];
        }
      //again making last term to start 
        arr[last]=start;

    }
  //printing array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
  //initilising required terms
    int time,arrname[50],i=0,size;
    cout<<"ENTER LENGTH:";
    cin>>size;

    cout<<"ENTER ROTATION TIME:";
    cin>>time;
  //loop for enter numbers in array
    for(i=0;i<size;i++){
        cout<<"ENTER NUMBERS IN ARRAY:";
        cin>>arrname[i];
    }
  //function calling
    leftrotate(arrname,size,time);
    return 0;

}
