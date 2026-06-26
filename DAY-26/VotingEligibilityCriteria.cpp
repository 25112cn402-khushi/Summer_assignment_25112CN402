#include <iostream>
using namespace std;

int main(){
    cout<<"VOTING ELIGIBILITY CRITERIA\n";
    
    //INITIALSING AGE 
    int age;
    
    //INPUT FOR AGE
    cout<<"ENTER AGE FOR VOTING ELIGIBILITY:";
    cin>>age;
    
    //CHECKING AGE SHOULD BE GRETAER THAN 18 FOR VOTING
    if(age>18){
        cout<<"YOU CAN SUCCESSFULLY VOTE IN INDIA!";
    }
    //OTHERWISE HE/SHE CANT VOTE
    else{
        cout<<"YOU ARE UNDERAGE FOR VOTING!";
    }
    return 0;
}
