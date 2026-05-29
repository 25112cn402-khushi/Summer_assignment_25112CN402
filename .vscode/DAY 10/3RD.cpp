#include <iostream>
using namespace std;
int main(){
    int rows,i,j,k,spc,num,prnt,num2,prnt2;
    cout<<"ENTER ROWS:";
    cin>>rows;
    spc=3;
    num=1;
    num2=0;
    
    for(i=1;i<=rows;i++){
        prnt=1;
        for(j=1;j<=spc;j++){
            cout<<" ";
        }
        for(k=1;k<=num;k++){
            cout<<prnt;
            prnt++;
        }
        prnt2=i-1;
        for(k=1;k<=num2;k++){
            cout<<prnt2;
            prnt2++;
        }
        
        spc--;
        num=num+1;
        num2++;
        
        cout<<"\n";
    }
    return 0;
}