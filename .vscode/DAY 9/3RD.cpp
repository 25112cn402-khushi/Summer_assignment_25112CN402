#include <iostream>
using namespace std;
int main(){
    int rows,i,j;
    char ch;
    cout<<"ENTER ROWS:";
    cin>>rows;
    ch = 'A';

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<ch;
        }
        ch++;
        cout<<"\n";
    }
    return 0;
}