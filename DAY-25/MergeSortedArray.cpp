#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //initialising arrays and size of both array
    int size1 ,size2;
    
    //input for size of both array
    cout<<"ENTER SIZE OF 1st array:";
    cin>>size1;

    cout<<"ENTER SIZE OF 2ND ARRAY:";
    cin>>size2;

    vector<int> arr1(size1) ,arr2(size2),merged(size1+size2);

    //loops for enter numbers in array
    for(int i=0;i<size1;i++){
        cout<<"ENTER NUMBER IN ARRAY 1:";
        cin>>arr1[i];

    }
    for(int i=0;i<size2;i++){
        cout<<"ENTER NUMBER IN ARRAY 2:";
        cin>>arr2[i];
    }
    //adding number in merged array from both array 
    for(int i=0;i<size1;i++){
        merged[i]=arr1[i];
    }
    for(int j=0;j<size2;j++){
        merged[size1+j]=arr2[j];
    }

    //sorting merged array
    sort(merged.begin(),merged.end());
    
    
    //printing  merged array
    for(int num:merged){
        cout<<num<<" ";
    }
    

}
