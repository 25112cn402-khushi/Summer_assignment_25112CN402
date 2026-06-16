#include <iostream>
using namespace std;
int main(){
  //initialising arrayname and size
    int arr[50],size,i,j,temp;
  //it will run by finding maximum vlaue in array and then making it on ascending order
    int max;
  //input array size
    cout<<"enter length of array:";
    cin>>size;
//loop for entering numbers in array
    for(i=0;i<size;i++){
        cout<<"ENTER NUMBER IN ARRAY:";
        cin>>arr[i];
    }
  //loop will run upto all numbers in array
    for(i=0;i<size;i++){
      //assigning max value be i so to exchange it 
        max=i;
      //this will check will maximum value in array
        for(j=i+1;j<size;j++){
          //maximum value in array
            if(arr[max]<arr[j]){
                max=j;

            }
        }
      //making maximum value to descending order
        temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
  //printing sorted array
    for(i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;

}
