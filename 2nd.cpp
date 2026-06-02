#include <iostream>
using namespace std;
int main(){
<<<<<<< HEAD
    int num,dupl, i,s,fact,r;
    cout<<"ENTER NUMBER:";
    cin>>num;
    dupl=num;
    s=0;

    while(num!=0){
        r=num%10;
        fact=1;
        for(i=1;i<=r;i++){
            fact=fact*i;
        }
        s=s+fact;
        num=num/10;
    }
    if(s==dupl){
        cout<<"It's a strong number";
    }
    else{
        cout<<"its not strong number";
=======
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
>>>>>>> bad85ad8dacddf8f338d8d0794aa8fca8b11375d
    }
    return 0;
}