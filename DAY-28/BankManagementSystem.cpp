#include <iostream>
#include <string>
using namespace std;

class bank{
public:
    int accno;
    string name;
    string type;
    float balance;

    void addaccount(bank b[], int n){

        for(int i=0;i<n;i++){

            cout<<"Enter Account Number: ";
            cin>>b[i].accno;
            cin.ignore();

            cout<<"Enter Account Holder Name: ";
            getline(cin,b[i].name);

            cout<<"Enter Account Type (Saving/Current): ";
            getline(cin,b[i].type);

            cout<<"Enter Initial Balance: ";
            cin>>b[i].balance;
        }
    }

    void display(bank b[], int n){

        for(int i=0;i<n;i++){

            cout<<"\nAccount Number: "<<b[i].accno;
            cout<<"\nAccount Holder: "<<b[i].name;
            cout<<"\nAccount Type: "<<b[i].type;
            cout<<"\nBalance: "<<b[i].balance<<endl;
        }
    }

    void search(bank b[], int n){

        int acc;

        cout<<"Enter Account Number to Search: ";
        cin>>acc;

        for(int i=0;i<n;i++){

            if(acc==b[i].accno){

                cout<<"\nAccount Found\n";
                cout<<"Account Holder: "<<b[i].name<<endl;
                cout<<"Account Type: "<<b[i].type<<endl;
                cout<<"Balance: "<<b[i].balance<<endl;
                return;
            }
        }

        cout<<"Account Not Found\n";
    }

    void update(bank b[], int n){

        int acc;

        cout<<"Enter Account Number to Update: ";
        cin>>acc;

        for(int i=0;i<n;i++){

            if(acc==b[i].accno){

                cin.ignore();

                cout<<"Enter New Account Holder Name: ";
                getline(cin,b[i].name);

                cout<<"Enter New Account Type: ";
                getline(cin,b[i].type);

                cout<<"Enter New Balance: ";
                cin>>b[i].balance;

                cout<<"Account Updated Successfully\n";
                return;
            }
        }

        cout<<"Account Not Found\n";
    }

    void deposit(bank b[], int n){

        int acc;
        float amount;

        cout<<"Enter Account Number: ";
        cin>>acc;

        for(int i=0;i<n;i++){

            if(acc==b[i].accno){

                cout<<"Enter Amount to Deposit: ";
                cin>>amount;

                b[i].balance += amount;

                cout<<"Amount Deposited Successfully\n";
                cout<<"Current Balance: "<<b[i].balance<<endl;
                return;
            }
        }

        cout<<"Account Not Found\n";
    }

    void withdraw(bank b[], int n){

        int acc;
        float amount;

        cout<<"Enter Account Number: ";
        cin>>acc;

        for(int i=0;i<n;i++){

            if(acc==b[i].accno){

                cout<<"Enter Amount to Withdraw: ";
                cin>>amount;

                if(amount<=b[i].balance){

                    b[i].balance -= amount;
                    cout<<"Withdrawal Successful\n";
                    cout<<"Current Balance: "<<b[i].balance<<endl;
                }
                else{

                    cout<<"Insufficient Balance\n";
                }
                return;
            }
        }

        cout<<"Account Not Found\n";
    }

    void richest(bank b[], int n){

        float max=b[0].balance;
        string holder=b[0].name;

        for(int i=1;i<n;i++){

            if(b[i].balance>max){

                max=b[i].balance;
                holder=b[i].name;
            }
        }

        cout<<"\nHighest Balance Account\n";
        cout<<"Account Holder: "<<holder<<endl;
        cout<<"Balance: "<<max<<endl;
    }

    void deleteaccount(bank b[], int &n){

        int acc;
        cout<<"Enter Account Number to Delete: ";
        cin>>acc;

        int pos=-1;

        for(int i=0;i<n;i++){

            if(b[i].accno==acc){

                pos=i;
                break;
            }
        }

        if(pos==-1){

            cout<<"Account Not Found\n";
            return;
        }

        for(int i=pos;i<n-1;i++){

            b[i]=b[i+1];
        }

        n--;

        cout<<"Account Deleted Successfully\n";
    }

};

int main(){

    cout<<"******** BANK MANAGEMENT SYSTEM ********\n";

    bank b[100];
    bank obj;

    int n,choice;

    cout<<"Enter Number of Accounts: ";
    cin>>n;

    do{

        cout<<"\n1. Add Accounts";
        cout<<"\n2. Display Accounts";
        cout<<"\n3. Update Account";
        cout<<"\n4. Delete Account";
        cout<<"\n5. Search Account";
        cout<<"\n6. Deposit Money";
        cout<<"\n7. Withdraw Money";
        cout<<"\n8. Highest Balance Account";
        cout<<"\n9. Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            obj.addaccount(b,n);
            break;

        case 2:
            obj.display(b,n);
            break;

        case 3:
            obj.update(b,n);
            break;

        case 4:
            obj.deleteaccount(b,n);
            break;

        case 5:
            obj.search(b,n);
            break;

        case 6:
            obj.deposit(b,n);
            break;

        case 7:
            obj.withdraw(b,n);
            break;

        case 8:
            obj.richest(b,n);
            break;

        case 9:
            cout<<"Thank You!\n";
            break;

        default:
            cout<<"Invalid Choice\n";
        }

    }while(choice!=9);

    return 0;
}
