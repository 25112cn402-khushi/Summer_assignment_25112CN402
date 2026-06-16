#include <iostream>
using namespace std;
int main(){
  //initialising arrayname and its size
    int arr[50],i,j,size,temp;
  //enter length of array
    cout<<"ENTER LENGTH:";
    cin>>size;
  //taking bool so to make loop run less time
    bool swap;

  //loop for entering numbers in array
    for(i=0;i<size;i++){
        cout<<"ENTER NUMBER IN ARRAY:";
        cin>>arr[i];
    }
  //printing before sorting 
    for(i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<"\n";
    //sorting
  //loop will run one before last elemet as last elemnt is already largest
    for(i=0;i<size-1;i++){
      //for every iteration of outer loop temp be 0 for swapping
        temp=0;
      //here swap is equals to 0
        swap=false;
      //now loop will run till by checking adjacent element
        for(j=0;j<size-1-i;j++){
          //checking larger
            if(arr[j+1]<arr[j]){
              //swapping
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
              //swap becomes true
                swap=true;
              
            }

        }
      //if full array get sorted then swap will have false
        if(!swap){
          //break the loop after full swaping
            break;
        }
    }
  //sorted array printing
    for(i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}
    
