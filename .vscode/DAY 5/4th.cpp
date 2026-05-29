#include <iostream>
using namespace std;
int main(){
    int num,i,count=0,max=0,prime;
    cout<<"ENTER NUMBER:";
    cin>>num;

    for(i=1;i<=num;i++){
        if(num%i==0){
            count=0;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count==2){
                if(max<i){
                    max=i;
                }
            }    
        }
    }
    cout<<max;
    return 0;
}