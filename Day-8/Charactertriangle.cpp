#include <iostream>
using namespace std;
int main(){
  //initialising i and j and character named ch
    int i,j;
    char ch;

 //running loop until 5 times for 5 rows
    for(i=1;i<=5;i++){
      //assigning charcter ch to A to print
        ch ='A';
      //running loop until i fir every iteration of i
        for(j=1;j<=i;j++){
          //printing character
            cout<<ch;
          //increaing ch value after every iteration
            ch++;
        }
      //it will make other line 
        cout<<"\n";
    }
    return 0;
}
