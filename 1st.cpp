#include <iostream>
<<<<<<< HEAD
using namespace std;
int main(){
    int r,num,i,sum=0,binary=0,t ;
    cout<<"ENTER NUMBER:";
    cin>>num;

    while(num!=0){
        r=num%2;
        sum=(sum*10)+r;
        num=num/2;
    }
    while(sum!=0){
        t=sum%10;
        binary=(binary*10)+t;
        sum=sum/10;
    }
    cout<<"binary is "<<binary<<"\n";
=======
<<<<<<< HEAD
#include <cmath>
using namespace std;
int main(){
    int num,count,dupl,dupl1,r;
    cout<<"ENTER NUMBER:";
    cin>>num;
    for(int i=1;i<=num;i++){
        count=0;
        double s=0;
        dupl=i;
        dupl1=i;
        while(dupl1!=0){
            dupl1=dupl1/10;
            count++;
        }
        while(dupl!=0){
            r=dupl%10;
            s=s+round(pow(r,count));
            dupl=dupl/10;
    }
    if(i==s){
        cout<<i<<" is armstrong number\n";}
}
=======
using namespace std;
int main(){
    int num,count=0,i;
    cout<<"ENTER NUMBER:";
    cin>>num;

    for(i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"ITS PRIME NUMBER";
    }
    else{
        cout<<"ITS COMPOSITE NUMBER";
    }
>>>>>>> bad85ad8dacddf8f338d8d0794aa8fca8b11375d
>>>>>>> 7f1a17435ccba28826293a9eb405c843c4ad2b96
    return 0;
}