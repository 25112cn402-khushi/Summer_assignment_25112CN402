#include <iostream>
using namespace std;
int main(){
  //initislising iand j,rows,
    int rows,i,j;
  //input for rows
    cout<<"ENTER ROWS:";
    cin>>rows;
  
//loop for rows 
    for(i=1;i<=rows;i++){
      //loop for column which will work till so to print triangle
        for(j=1;j<=i;j++){
          //printing j so same value will print entire row
            cout<<j;
        }
      //it will run to other row otherwise all will print at same line
        cout<<"\n";
    }
    return 0;
}
