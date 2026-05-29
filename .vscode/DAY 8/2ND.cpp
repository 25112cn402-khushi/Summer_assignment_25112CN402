#include <iostream>
using namespace std;
int main(){
    int rows, colm,i,j;
    cout<<"ENTER ROWS:";
    cin>>rows;
    cout<<"ENTER COLUMN:";
    cin>>colm;

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}