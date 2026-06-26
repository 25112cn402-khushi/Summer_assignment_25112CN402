#include <iostream>
#include <math.h>
using namespace std;

//taking already principle amount before and pin
double balance=10000;
int pin =1234;

//function for checking balance 
//it will print the balance 
void checkbalance(){
     cout<<"Current Balance: Rs."<<balance<<"\n";
}

//function for depositing money in bank
void deposit(){
    //initialising amount 
    double amount;
    //input for amount
    cout<<"Enter amount deposit: ";
    cin>>amount;
    
    //if amount is positive value we will add it into  principle amount
    if(amount>0){
        //adding
        balance=balance+amount;
        //printing
        cout<<"Rs."<<amount<<" deposited successfully.\n";
    }
    //if amount is negative then its invalid number
    else{
        //printing invalid number
        cout<<"Invalid amount!\n";
    }
}
//function for withdrawing money from bank
void withdraw(){
    double amount;
    //input for amount which is to be withdrawn
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    
    //if amount is negative or 0 invalid amount will print
    if(amount<=0){
        cout<<"Invalid amount!\n";
    }
    //if amount of withdrawal money is more than amount in bank then we will print insufficient balance
    else if(amount>balance){
        cout<<"Insufficient Balance!\n";
    }
    //otherewise we will withdraw the money
    else{
        balance=balance-amount;
        cout<<"Please collect your cash.\n";
        cout<<"Remainimg Balance: Rs."<<balance<<"\n";
    }

}
//function for changing the pin
void changepin(){
    //entering old pin
    int oldpin,newpin;

    cout<<"Enter Oldpin:";
    cin>>oldpin;
    //if the person knows oldpin then only newpin get formed
    if(oldpin==pin){
      cout<<"Enter New PIN:";
      cin>>newpin;
      pin=newpin;
      //assigning new pin in pin
      cout<<"PIN changed!\n";

    }
    //if person does not know old pin then pin cannot be changed
    else{
        cout<<"WRONG OLD PIN.\n";
    }
}
int main(){
    int enteredpin;
    //initialising enetred pin and it should be same as pin

    cout<<"=====ATM SIMULATION SYSTEM=====\n";
    //input for entered pin
    cout<<"ENTER YOUR PIN:";
    cin>>enteredpin;
    
    //if pin is not same as entered pin then it will not run the code further
    if(enteredpin!=pin){
        cout<<"Incorrect PIN! \n";
        return 0;
    }

    //here its a menu driven program
    int choice;
    do{
        cout<<"RUNS THE MAIN INTERFACE MENU LOOP\n";
        
        //printing required operations 
        cout<<"1. Check Balance\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. Change PIN\n";
        cout<<"4. Exit\n";
        
        //enter your operation u want to perform
        cout<<"Enter your choice:";
        cin>>choice;

        //having switch for all cases
        switch(choice){
            //case 1 for checking the balance
            case 1:
              checkbalance();
              break;
            //case 2 for depositing some amount of money in ATM
            case 2:
               deposit();
               break;
            //case 2 is for withdrawing some amount of money
            case 3:
                withdraw();
                break;
            //case 4 is for changing the pin
            case 4:
                changepin();
                break;
            //case 5 is for exit the ATM 
            case 5:
                cout<<"Thank you for using the  ATM\n";
                break;
            //if another choice rather than above 5 then it is an invalid choice
            default:
                cout<<" Invalid Choice!\n";
        }
        //loop will run till choice should not be equal to 5 as it will exit the loop 
    }while(choice!=5);

    return 0;
}
