#include <iostream>
using namespace std;
//introducing function named reverse
int reverse(int arr[],int size){
  //initialisating last term  as last index of array
    int last=size-1;
  //initialising start as 1st array number
    int start=arr[0];
  //loop will rum till half of array to exchange numbers
    for(int i=0;i<size/2;i++){
      //exchanging numbers
        arr[i]=arr[last];
      //reducing last index by 1
        last--;
    }
  //defining array last term to first term
    arr[size-1]=start;
  //loop for printing array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
  //initialising arrayname and size
    int arrname[50],i=0,size;
  //input size
    cout<<"ENTER LENGTH:";
    cin>>size;

  //loop for input numbers
    for(i=0;i<size;i++){
        cout<<"ENTER NUMBERS IN ARRAY:";
        cin>>arrname[i];
    }
  //function calling
    reverse(arrname,size);
    return 0;

}
