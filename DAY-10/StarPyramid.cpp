
#include <iostream>
using namespace std;
int main(){
  //initialising i k j spc star as str and number of rows
    int rows,i,j,k,spc,str;
  //input of rows which should be 5
    cout<<"ENTER ROWS:";
    cin>>rows;
  //here we want space equal to 3
    spc=3;
  //here we want only one star in 1st row
    str=1;

  //loop for number of rows
    for(i=1;i<=rows;i++){
      //loop for spaces in each row
        for(j=1;j<=spc;j++){
          //printing space
            cout<<" ";
        }
      //loop for star in each row
        for(k=1;k<=str;k++){
          //printing star
            cout<<"*";
        }
      //reducing space by 1 to print pyramid in each row
        spc--;
      //increasing star value by 2 in each row
        str=str+2;
      //move to other line
        cout<<"\n";
    }
  return 0;
}
