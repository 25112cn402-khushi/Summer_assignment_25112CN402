#include <iostream>
using namespace std;
int main(){
    int rows,column,i,j;
    cout<<"ENTER ROWS:";
    cin>>rows;

    for(i=1;i<=rows;i++){
        for(j=1;j<=5;j++){
            if(((i>1) && (i<5)) && ((j>1) && (j<5))){
                cout<<" ";}
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}