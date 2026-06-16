#include <iostream>
using namespace std;
int main(){
  //initialising arrayname and size
    int arr[50],size,i,j,temp;
  //it will run by finding minimum vlaue in array and then making it on ascending order
    int min;
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
      //assigning min value be i so to exchange it 
        min=i;
      //this will check will minimum value in array
        for(j=i+1;j<size;j++){
          //minimum value in array
            if(arr[min]>arr[j]){
                min=j;

            }
        }
      //making minmum value to ascending order
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
  //printing sorted array
    for(i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;

}
