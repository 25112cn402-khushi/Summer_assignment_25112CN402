#include <iostream>
#include <string>
using namespace std;

class contact{
public:
    int id;
    string name;
    string phone;
    string email;

    void addcontact(contact c[], int n){

        for(int i=0;i<n;i++){

            cout<<"Enter Contact ID: ";
            cin>>c[i].id;
            cin.ignore();

            cout<<"Enter Name: ";
            getline(cin,c[i].name);

            cout<<"Enter Phone Number: ";
            getline(cin,c[i].phone);

            cout<<"Enter Email: ";
            getline(cin,c[i].email);
        }
    }

    void display(contact c[], int n){

        for(int i=0;i<n;i++){

            cout<<"\nContact ID: "<<c[i].id;
            cout<<"\nName: "<<c[i].name;
            cout<<"\nPhone Number: "<<c[i].phone;
            cout<<"\nEmail: "<<c[i].email<<endl;
        }
    }

    void search(contact c[], int n){

        int id;

        cout<<"Enter Contact ID to Search: ";
        cin>>id;

        for(int i=0;i<n;i++){

            if(c[i].id==id){

                cout<<"\nContact Found\n";
                cout<<"Name: "<<c[i].name<<endl;
                cout<<"Phone Number: "<<c[i].phone<<endl;
                cout<<"Email: "<<c[i].email<<endl;
                return;
            }
        }

        cout<<"Contact Not Found\n";
    }

    void update(contact c[], int n){

        int id;

        cout<<"Enter Contact ID to Update: ";
        cin>>id;

        for(int i=0;i<n;i++){

            if(c[i].id==id){

                cin.ignore();

                cout<<"Enter New Name: ";
                getline(cin,c[i].name);

                cout<<"Enter New Phone Number: ";
                getline(cin,c[i].phone);

                cout<<"Enter New Email: ";
                getline(cin,c[i].email);

                cout<<"Contact Updated Successfully\n";
                return;
            }
        }

        cout<<"Contact Not Found\n";
    }

    void longestname(contact c[], int n){

        string longest=c[0].name;

        for(int i=1;i<n;i++){

            if(c[i].name.length()>longest.length()){

                longest=c[i].name;
            }
        }

        cout<<"\nContact with Longest Name: "<<longest<<endl;
    }

    void deletecontact(contact c[], int &n){

        int id;

        cout<<"Enter Contact ID to Delete: ";
        cin>>id;

        int pos=-1;

        for(int i=0;i<n;i++){

            if(c[i].id==id){

                pos=i;
                break;
            }
        }

        if(pos==-1){

            cout<<"Contact Not Found\n";
            return;
        }

        for(int i=pos;i<n-1;i++){

            c[i]=c[i+1];
        }

        n--;

        cout<<"Contact Deleted Successfully\n";
    }
};

int main(){

    cout<<"******** CONTACT MANAGEMENT SYSTEM ********\n";

    contact c[100];
    contact obj;

    int n,choice;

    cout<<"Enter Number of Contacts: ";
    cin>>n;

    do{

        cout<<"\n1. Add Contacts";
        cout<<"\n2. Display Contacts";
        cout<<"\n3. Update Contact";
        cout<<"\n4. Delete Contact";
        cout<<"\n5. Search Contact";
        cout<<"\n6. Contact with Longest Name";
        cout<<"\n7. Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            obj.addcontact(c,n);
            break;

        case 2:
            obj.display(c,n);
            break;

        case 3:
            obj.update(c,n);
            break;

        case 4:
            obj.deletecontact(c,n);
            break;

        case 5:
            obj.search(c,n);
            break;

        case 6:
            obj.longestname(c,n);
            break;

        case 7:
            cout<<"Thank You!\n";
            break;

        default:
            cout<<"Invalid Choice\n";
        }

    }while(choice!=7);

    return 0;
}
