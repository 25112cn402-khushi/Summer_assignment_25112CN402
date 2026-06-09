#include <iostream>
using namespace std;
//introducing function
int maxmin(int arr[],int size){
    int max,min;
    int i;
    max=0;
    min=arr[0];
  //loop for largest and smallest number in array
    for(i=0;i<size;i++){
        if(max < arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
  //output for maximum and minimum
    cout<<"MAXIMUM VALUE IN ARRAY:"<<max<<"\n";
    cout<<"MINIMUM VALUE IN ARRAY:"<<min;
    return 0;
}
int main(){
  //initialising array and size
    int arrname[50],i,n;
  //input size
    cout<<"ENTER LENGTH OF ARRAY:";
    cin>>n;

  //loop for entering numbers in array
    for(i=0;i<n;i++){
        cout<<"ENTER NUMBER:";
        cin>>arrname[i];
    }
  //calling function
    maxmin(arrname,n);
    return 0;

}
