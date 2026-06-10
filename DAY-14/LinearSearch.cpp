#include <iostream>
using namespace std;
//intoducing function
int linearsearch(int arr[],int size,int search){
  //initialising i and pos so to grt index of number present in array
    int i,pos=-1;
  //loop for searching element in array
    for(i=0;i<size;i++){
      //searching
        if(search==arr[i]){
          //defining position
            pos=i;
          //exit from loop if number get searched
            break;
        }
    }
  //if pos value is -1 only then number is not in array
    if(pos==-1){
        cout<<"NO SUCH NUMBER IS IN ARRAY";
    }
  //otherwise
    else{
        cout<<search<<" is at postion "<<pos;
    }
    return 0;
}
int main(){
  //initialising arrayname and size and number to be searched
    int arrname[50],n,i=0,search;
    cout<<"ENTER LENGTH OF ARRAY:";
    cin>>n;

  //loop for entering the number in array
    for(i;i<n;i++){
        cout<<"ENTER NUMBER:";
        cin>>arrname[i];
    }

  //input searched number
    cout<<"WHAT TO SEARCH:";
    cin>>search;

  //calling function
    linearsearch(arrname,n,search);
    return 0;
}
