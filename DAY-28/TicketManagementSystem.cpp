#include <iostream>
#include <string>
using namespace std;

class ticket{
public:
    int ticketid;
    string passenger;
    string destination;
    int seatno;
    float fare;

    void bookticket(ticket t[], int n){

        for(int i=0;i<n;i++){

            cout<<"Enter Ticket ID: ";
            cin>>t[i].ticketid;
            cin.ignore();

            cout<<"Enter Passenger Name: ";
            getline(cin,t[i].passenger);

            cout<<"Enter Destination: ";
            getline(cin,t[i].destination);

            cout<<"Enter Seat Number: ";
            cin>>t[i].seatno;

            cout<<"Enter Fare: ";
            cin>>t[i].fare;
        }
    }

    void display(ticket t[], int n){

        for(int i=0;i<n;i++){

            cout<<"\nTicket ID: "<<t[i].ticketid;
            cout<<"\nPassenger Name: "<<t[i].passenger;
            cout<<"\nDestination: "<<t[i].destination;
            cout<<"\nSeat Number: "<<t[i].seatno;
            cout<<"\nFare: "<<t[i].fare<<endl;
        }
    }

    void search(ticket t[], int n){

        int id;

        cout<<"Enter Ticket ID to Search: ";
        cin>>id;

        for(int i=0;i<n;i++){

            if(id==t[i].ticketid){

                cout<<"\nTicket Found\n";
                cout<<"Passenger: "<<t[i].passenger<<endl;
                cout<<"Destination: "<<t[i].destination<<endl;
                cout<<"Seat Number: "<<t[i].seatno<<endl;
                cout<<"Fare: "<<t[i].fare<<endl;
                return;
            }
        }

        cout<<"Ticket Not Found\n";
    }

    void update(ticket t[], int n){

        int id;

        cout<<"Enter Ticket ID to Update: ";
        cin>>id;

        for(int i=0;i<n;i++){

            if(id==t[i].ticketid){

                cin.ignore();

                cout<<"Enter New Passenger Name: ";
                getline(cin,t[i].passenger);

                cout<<"Enter New Destination: ";
                getline(cin,t[i].destination);

                cout<<"Enter New Seat Number: ";
                cin>>t[i].seatno;

                cout<<"Enter New Fare: ";
                cin>>t[i].fare;

                cout<<"Ticket Updated Successfully\n";
                return;
            }
        }

        cout<<"Ticket Not Found\n";
    }

    void highestfare(ticket t[], int n){

        float max=t[0].fare;
        string name=t[0].passenger;

        for(int i=1;i<n;i++){

            if(t[i].fare>max){

                max=t[i].fare;
                name=t[i].passenger;
            }
        }

        cout<<"\nPassenger with Highest Fare: "<<name;
        cout<<"\nFare: "<<max<<endl;
    }

    void deleteticket(ticket t[], int &n){

        int id;

        cout<<"Enter Ticket ID to Delete: ";
        cin>>id;

        int pos=-1;

        for(int i=0;i<n;i++){

            if(t[i].ticketid==id){

                pos=i;
                break;
            }
        }

        if(pos==-1){

            cout<<"Ticket Not Found\n";
            return;
        }

        for(int i=pos;i<n-1;i++){

            t[i]=t[i+1];
        }

        n--;

        cout<<"Ticket Cancelled Successfully\n";
    }
};

int main(){

    cout<<"******** TICKET BOOKING SYSTEM ********\n";

    ticket t[100];
    ticket obj;

    int n,choice;

    cout<<"Enter Number of Tickets: ";
    cin>>n;

    do{

        cout<<"\n1. Book Tickets";
        cout<<"\n2. Display Tickets";
        cout<<"\n3. Update Ticket";
        cout<<"\n4. Cancel Ticket";
        cout<<"\n5. Search Ticket";
        cout<<"\n6. Highest Fare Ticket";
        cout<<"\n7. Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            obj.bookticket(t,n);
            break;

        case 2:
            obj.display(t,n);
            break;

        case 3:
            obj.update(t,n);
            break;

        case 4:
            obj.deleteticket(t,n);
            break;

        case 5:
            obj.search(t,n);
            break;

        case 6:
            obj.highestfare(t,n);
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
