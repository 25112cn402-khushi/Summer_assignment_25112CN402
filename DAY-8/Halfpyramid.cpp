#include <iostream>
using namespace std;
int main(){
  //intialising how many rows and column you want
    int rows, colm,i,j;
  //entering inputs
    cout<<"ENTER ROWS:";
    cin>>rows;
    cout<<"ENTER COLUMN:";
    cin>>colm;
  //loop for the number of rows 
    for(i=1;i<=rows;i++){
      //loop for columns
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
