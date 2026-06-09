#include <iostream>
using namepace std;
int main(){
  //initialsing arrayname and its size
    int n,arryname[50],i;
  //input of length
    cout<<"lenght of array:";
    cin>>n;

  //loop for entering the number in array
    for(i=0;i<n;i++){
        cout<<"ENTER NUMBER:";
        cin>>arryname[i];
    }
  //loop for output of number in array
    for(i=0;i<n;i++){
        cout<<arryname[i]<<"  ";
    }
    return 0;
}
