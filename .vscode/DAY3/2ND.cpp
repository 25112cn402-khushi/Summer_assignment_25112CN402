#include <iostream>
using namespace  std;
 int main(){
    int limit,i,count,j;
    cout<<"ENTER UPPER LIMIT";
    cin>>limit;

    for(i=2;i<=limit;i++){
        count=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            cout<<i<<" is prime number "<<"\n";
        }
    }
    return 0;
}