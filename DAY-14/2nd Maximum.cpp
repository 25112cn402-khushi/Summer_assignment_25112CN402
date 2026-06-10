#include <iostream>
using namespace std;
//calling function
int secndlargest(int arr[],int size){
  //having max and secmax as variables
    int max=0,secmax=0,i=0,arr2[size];
  //loop for max value in array
    for(i;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
  //loop for entering number in array 2
    for(i=0;i<size;i++){
      //if array equals to max value than we will add 0 in 2nd array
        if(arr[i]==max){
            arr2[i]=0;
        }
        else{
          //otherwise adding rest vlues same as 1st array
            arr2[i]=arr[i];
        }
    }
  //loop for maximum value in 2nd array which will we the 2nd maximum value in 1st array
    for(i=0;i<size;i++){
        if(secmax<arr2[i]){
            secmax=arr2[i];
        }
    }
  //printing 2nd maximum value
    cout<<"2nd largest:"<<secmax;
    return 0;
}
int main(){
    int n,arrname[50],i=0;
  //enter array size
    cout<<"ENTER LENGTH OF ARRAY:";
    cin>>n;

  //loop for entering numbers in array
    for(i=0;i<n;i++){
        cout<<"ENTER NUMBER IN ARRAY:";
        cin>>arrname[i];
    }
  //calling function
    secndlargest(arrname,n);
  
    return 0;
}
