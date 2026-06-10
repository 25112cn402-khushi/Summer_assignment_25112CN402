#include <iostream>
using namespace std;
int main(){
  //initialising array;
    int arr[50],i=0,count,n;
  //input size
    cout<<"ENTER LENGTH OF ARRAY:";
    cin>>n;

  //loop for entering number in array
    for(i=0;i<n;i++){
        cout<<"ENTER NUMBER IN ARRAY:";
        cin>>arr[i];
    }
  //loop for checking each number existing 2 times
    for(int j=0; j<n;j++){
      //after each number in array count equals to 0
        count=0;
      //loop for checking each number to other number in array
        for(i=0;i<n;i++){
          //checking
            if(arr[j]==arr[i])
              //counting
            {  count++;}
            
        }
        int k;
      //loop for so to print in only one time
        for(k=0;k<j;k++){
          //if loop iteration number equals to j then it will break 
            if(arr[k]==arr[j]){
                break;
            }
        }
      //now count becomes equals to 2 and due to upper loop k==j then 
        if(count==2 && k==j){
          //it will make sure to print only one time
            cout<<"2 times existing in array:"<<arr[j]<<"\n";
        }
    }
    return 0;
    
} 
