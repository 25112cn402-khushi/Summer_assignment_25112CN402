#include <iostream>
using namespace std;
int main(){
    int rows,i,j,k;
    cout<<"ENTER ROWS:";
    cin>>rows;

    for(i=1;i<=rows;i++){
        k=1;
        for(j=rows;j>=i;j--){
            cout<<k;
            k++;
        }
        cout<<"\n";
    }
    return 0;
}