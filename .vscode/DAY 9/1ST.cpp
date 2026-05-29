#include <iostream>
using namespace std;
int main(){
    int rows,i,j;
    cout<<"ENTER ROWS:";
    cin>>rows;

    for(i=1;i<=rows;i++){
        for(j=rows;j>=i;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}