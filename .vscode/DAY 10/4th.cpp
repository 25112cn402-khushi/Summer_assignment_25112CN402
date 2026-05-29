#include <iostream>
using namespace std;
int main(){
    int rows,i,j,k,spc,num,num2;
    cout<<"ENTER ROWS:";
    cin>>rows;
    spc=3;
    num=1;
    
    for(i=1;i<=rows;i++){
        char prnt = 'A';
        for(j=1;j<=spc;j++){
            cout<<" ";
        }
        for(k=1;k<=num;k++){
            cout<<prnt;
            prnt++;
        }

        
        spc--;
        num=num+1;
        
        
        cout<<"\n";
    }  
    for(i=1;i<=rows;i++){
        char 
        for(j=1;j<=i;j++){
            cout<<chara;
            chara++;
        }
    }
    return 0;
}