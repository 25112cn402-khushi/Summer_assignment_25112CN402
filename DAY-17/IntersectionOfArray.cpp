#include <iostream>
using namespace std;
int main(){
  //initialsing array 1 and array 2
    int arr1[50],arr2[50],size1,size2;
  //enter size of array 1
    cout<<"ENTER SIZE1:";
    cin>>size1;
//enter numbers in array 1
    for(int i=0;i<size1;i++){
        cout<<"ENTER NUMBER IN ARRAY 1:";
        cin>>arr1[i];
    }
//enter size of array 2
   cout<<"ENTER SIZE2:";
    cin>>size2;
//enter numbers in array 2
    for(int i=0;i<size2;i++){
        cout<<"ENTER NUMBER IN ARRAY 2:";
        cin>>arr2[i];
    } 
    
   //if size1 is less than size 2
    if(size1<=size2){
      //loop will run to shorter time
        for(int j=0;j<size1;j++){
          //p=0 for every iteration of loop
            int p=0;
          //loop will check which will run upto size 2 for checking
            for(int i=0;i<size2;i++){            
                if(arr1[j]==arr2[i]){
                  //assigning value
                    p=arr1[j];
                  //printing
                    cout<<p<<" is the intersection of both array";
                  //breaking 
                    break;
                }
            }
          //if value get assigned to p then breaking outer loop
        if(p!=0){
            break;
        }}
    }
    //working same if size2 is smaller
    else{
        for(int j=0;j<size2;j++){
            int p=0;
            for(int i=0;i<size1;i++){            
                if(arr2[j]==arr1[i]){
                    p=arr2[j];
                    cout<<p<<" is the intersection of both array";
                    break;
                }
            }
        if(p!=0){
            break;
        }}
    }
    return 0;
}
