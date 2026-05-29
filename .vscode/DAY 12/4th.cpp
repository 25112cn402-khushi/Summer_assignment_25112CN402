#include <iostream>
using namespace std;
void perfectnum(int num){
    int i,s ,dupl;
    dupl=num;
    i=1;
    s=0;
    for(i;i<num;i++){
        if(num%i==0){
            s=s+i;
        }
    }
    if(s==dupl){
        cout<<"ITS PERFECT NUMBER";
    }
    else{
        cout<<"its not perfect number";
    }
}
int main(){
    int num;
    cout<<"ENTER NUMBER:";
    cin>>num;

    perfectnum(num);
    return 0;
}