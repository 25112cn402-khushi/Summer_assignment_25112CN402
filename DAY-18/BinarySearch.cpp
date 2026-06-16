//BINARY SEARCH
//works on sorted array
#include <iostream>
using namespace std;
int main(){
  //enter arrayname and size 
    int arr[50],size,search,end, beg;
  //let taking position be 0
    int pos=0;    
  //enter size of array
    cout<<"ENTER LENGTH OF ARRAY:";
    cin>>size;
//enter numbers in array
    for(int i=0;i<size;i++){
        cout<<"ENTER NUMBER IN ARRAY:";
        cin>>arr[i];
    }
  //let take beginning value be 0
    beg=0;
  //let take end value be size
    end=size;
  //take mid value which should not be number to be search to work on loop
    int mid=(beg+end)/2;
  //number searched enter
    cout<<"ENTER NUMBER TO BE SEARCHED";
    cin>>search;
//loop will run from beginning to end numbers of array and array mid should be search
    while(beg<end && arr[mid]!=search){
      //number greater than mid value
        if(search>arr[mid]){
          //than beginning value should be mid 
            beg=mid;
            pos=1;
          
        }
      //number less than mid value
        if(search<arr[mid]){
          //end becomes mid
           end=mid;
            pos=1;
        }
        mid=(beg+end)/2;

    }
  //pos reamins 0 then number is not in array
    if(pos==0){
        cout<<"it not  lies in array";}
  //else condition
    else{
        cout<<"it lies at :"<<mid;
    }
  return 0;
}






