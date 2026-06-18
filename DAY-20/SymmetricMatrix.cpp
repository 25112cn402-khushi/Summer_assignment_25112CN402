#include <iostream>
using namespace std;
int main(){
  //initialising arrayname row and column  
    int arr[50][50],i,j,row,colum;

 //enter rows and column
    cout<<"ENTER ROW:";
    cin>>row;

    cout<<"ENTER COLUMN:";
    cin>>colum;

  //enter numbers in matrix
    cout<<"ARRAY input:\n";
    for(i=0;i<row;i++){
        cout<<"ENTER IN ROWS:\n";
        for(j=0;j<colum;j++){
            cout<<"ENTER IN  COLUMN:";
            cin>>arr[i][j];
        }
    } 
 //printing matrix
    cout<<"Array:\n";
    for(i=0;i<row;i++){
        for(j=0;j<colum;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
  //for symmetric transpose is equal to matrix
    int count=0;
    cout<<"SYMMETRIC:\n";
    for(i=0;i<row;i++){
        for(j=0;j<colum;j++){
          //checking the condition if its symmetric then it count will number of time loop will run
            if(arr[j][i]==arr[i][j]){
                count++;
            }
        }
    }
  //checking count condition
    if(count==row*colum){
        cout<<"ITS SYMMETRIC";
    }
    else{
        cout<<"ITS NOT SYMMETRIC";
    }
    return 0;

}
