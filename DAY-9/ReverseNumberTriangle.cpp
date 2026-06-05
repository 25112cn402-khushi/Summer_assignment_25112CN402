#include <iostream>
using namespace std;
int main(){
  //initialising rows i j and k
    int rows,i,j,k;
  //input of rows
    cout<<"ENTER ROWS:";
    cin>>rows;

  //loop for number of rows
    for(i=1;i<=rows;i++){
      //as we have to print from 1 so itiliasing k equal to 1
        k=1;
      //loop for column which will start from rows to i so print reverse pyramid
        for(j=rows;j>=i;j--){
          //it will print value of k
            cout<<k;
          //increasing value of k by 1
            k++;
        }
      //move to next line
        cout<<"\n";
    }
    return 0;
}
