#include <iostream>
using namespace std;
int main(){
  //initialising arrayname row and column
    int arr[50][50],sum=0,i,j,row,colum;
  //input for rows and column
    cout<<"ENTER ROW:";
    cin>>row;

    cout<<"ENTER COLUMN:";
    cin>>colum;
  //loop for input  numbers in matrix
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
  //printing sum
    cout<<"SUM OF EACH ROWS:\n";
    for(i=0;i<row;i++){
      //after every row sum will become 0
        sum=0;
        for(j=0;j<colum;j++){
          //move to each column of row for sum
            sum+=arr[i][j];
        }
      //then print sum
        cout<<"SUM OF "<<i+1<<" is :"<<sum;
        cout<<"\n";
    }
    return 0;

}
