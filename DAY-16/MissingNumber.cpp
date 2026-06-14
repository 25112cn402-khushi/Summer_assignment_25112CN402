#include <iostream>
using namespace std;
//introducing function
int missing(int arr[],int size){
  //initialisisng required variables
    int ss,sumis=0,missingnum;
  //finding sum till n number of numbers by formula
    ss=(size*(size+1))/2;
  //loop for sum of numbers in array
    for(int i=0;i<size;i++){
      //sum
        sumis=sumis+arr[i];
    }
  //finding missing number by subtracting it
    missingnum=ss-sumis;
  //printing number
    cout<<"MISSING NUMBER IS:"<<missingnum;
}
int main(){
  //having array
    int arr[5]={2,3,5,1};
  //let size be 5
    int n=5;
  //calling function
    missing(arr,n);
    return 0;
}
