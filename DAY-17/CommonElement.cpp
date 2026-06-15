#include <iostream>
using namespace std;
int main(){
  //initialising array1 and array 2
    int arr1[50],arr2[50],size1,size2;
  //enter size  of array 1
    cout<<"ENTER SIZE1:";
    cin>>size1;
//loop for entering numbers in array 1
    for(int i=0;i<size1;i++){
        cout<<"ENTER NUMBER IN ARRAY 1:";
        cin>>arr1[i];
    }

  //enter size of array 2
   cout<<"ENTER SIZE2:";
    cin>>size2;
//loop for entering numbers in array 2
    for(int i=0;i<size2;i++){
        cout<<"ENTER NUMBER IN ARRAY 2:";
        cin>>arr2[i];
    } 
    
    int k;
  //making loop run less time so size1 should be small
    if(size2>=size1){
      //loop running
        for(int j=0;j<size1;j++){
          //if p=0 for every iteration
            int p=0;
          //loop will run upto size 2
            for(int i=0;i<size2;i++){
              //checking
                if(arr1[j]==arr2[i]){
                    p=arr1[j];
                  //printing numbers having same numbers in both array
                    cout<<p<<" is the number in  both array\n";
                  //breaking loop if condition get true
                    break;}
            }
        }
    }//again elase condition size2 is small
    else{
        for(int j=0;j<size2;j++){
            int p=0;
            for(int i=0;i<size1;i++){
                if(arr2[j]==arr1[i]){
                    p=arr2[j];
                    cout<<p<<" is the number in  both array\n";
                    break;}
            }
        }
    }

    
    return 0;
}
