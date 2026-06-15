//merge
#include <iostream>
using namespace std;
int main(){
//enter array
    int arr1[50],arr2[50],size1,size2;
//enter size of 1st array
    cout<<"ENTER SIZE1:";
    cin>>size1;
//loop for enter numbers in array 1
    for(int i=0;i<size1;i++){
        cout<<"ENTER NUMBER IN ARRAY 1:";
        cin>>arr1[i];
    }
//enter size of 2nd array
   cout<<"ENTER SIZE2:";
    cin>>size2;
//loop for enter numbers in array 2
    for(int i=0;i<size2;i++){
        cout<<"ENTER NUMBER IN ARRAY 2:";
        cin>>arr2[i];
    } 

 //if size2 is greater than size 1 than loop will run upto size2
    if(size2>=size1){
        for(int i=0;i<size2;i++){
          //adding numbers in array 2 to array 1
            arr1[i+size1]=arr2[i];
        }
      //printing array 1 as modified merger
        for(int i=0;i<size1+size2;i++){
            cout<<arr1[i]<<"  ";
        }
    }
  //if size 1 is greater
    else{
        for(int i=0;i<size1;i++){
          //adding numbers in array 1 to array 2
            arr2[i+size2]=arr1[i];
        }
      //printing array 2 as modified merger
        for(int i=0;i<size1+size2;i++){
            cout<<arr2[i]<<"  ";
        }
    }
