//sum and average of array
#include <iostream>
using namespace std;
//intoducing function
void sumaverage(int arr[],int size){
    int sum,average;
    sum=0;
    average=0;
  //calculating sum 
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
  //calculating average
    average=sum/size;
  //printing average and sum
    cout<<"average of array:"<<average<<"\n";
    cout<<"sum of array:"<<sum;
}
int main(){
  //initialsing arrayname and size
    int arrname[50] ,n;
  //input size
    cout<<"ENTER LENGTH:";
    cin>>n;

  //loop for entering numbers in array
    for(int i=0 ;i<n;i++){
        cout<<"ENTER NUMBER:";
        cin>>arrname[i];
    }
  //calling function
    sumaverage(arrname,n);
    return 0;


}
