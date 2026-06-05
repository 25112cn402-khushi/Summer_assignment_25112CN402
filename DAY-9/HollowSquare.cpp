#include <iostream>
using namespace std;
int main(){
  //initialsing rows coulmn i and j
    int rows,column,i,j;
  //entering rows as 5 to print square
    cout<<"ENTER ROWS:";
    cin>>rows;

  //loop for number of rows
    for(i=1;i<=rows;i++){
      //loop for number of column
        for(j=1;j<=5;j++){
          //it will print * only in boundry on square and rest will we space
            if(((i>1) && (i<5)) && ((j>1) && (j<5))){
                cout<<" ";}
              //printring space
            else{
              //printing star
                cout<<"*";
            }
        }
      //moving to next line
        cout<<"\n";
    }
    return 0;
}
