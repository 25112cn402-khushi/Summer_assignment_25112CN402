include <iostream>
using namespace std;
int main(){
    int rows,i,j,k,spc,str;
    cout<<"ENTER ROWS:";
    cin>>rows;
    spc=3;
    str=1;

    for(i=1;i<=rows;i++){
        for(j=1;j<=spc;j++){
            cout<<" ";
        }
        for(k=1;k<=str;k++){
            cout<<"*";
        }
        spc--;
        str=str+2;
        cout<<"\n";
    }
    return 0;
}