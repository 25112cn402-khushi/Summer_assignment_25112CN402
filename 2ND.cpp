#include <iostream>
using namespace std;
int main(){
    int range,i,count;
    cout<<"ENTER RANGE:";
    cin>>range;
    cout<<"1 is not prime nor composite\n";
    
    for(i=2;i<=range;i++){
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            cout<<"ITS PRIME:"<<i<<"\n";
        }
    }
    return 0;
}