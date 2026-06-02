#include <iostream>
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
    return 0;
}