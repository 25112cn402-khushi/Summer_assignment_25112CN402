#include <iostream>
using namespace std;
//intoducing function
int countoddeven(int arr[],int size){
  //countodd and counteven initialsing to 0
    int countodd=0 , counteven=0 , i ;
  //loop for counting even and odd
    for(i=0;i<size;i++){
      //even
        if(arr[i]%2==0){
          //counting
            counteven++;
        }
      //odd
        else{
          //counting
            countodd++;
        }
    }
  //printing even and odd count
    cout<<" EVEN NUMBERS IN ARRAY:"<<counteven<<"\n";
    cout<<" ODD NUMBERS IN ARRAY:"<<countodd;
    return 0;
}
int main(){
  //initialising arrayname and size
    int arrname[50],i,n;
  //input size
    cout<<"ENTER LENGTH:";
    cin>>n;
 //loop for entering number in array
    for(i=0;i<n;i++){
        cout<<"ENTER NUMBER:";
        cin>>arrname[i];
    }
  //calling function
    countoddeven(arrname,n);
    return 0;

}
