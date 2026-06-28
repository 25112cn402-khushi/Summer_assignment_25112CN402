#include <iostream>
#include <string>
using namespace std;

class book{
    public:
    int bookid;
    string title;
    string author;
    float price;
    int quantity;

    void addbook(book b[], int n){
    for(int i=0; i<n; i++){

        cout<<"Enter Book ID: ";
        cin>>b[i].bookid;
        cin.ignore();

        cout<<"Enter Book Title: ";
        getline(cin,b[i].title);

        cout<<"Enter Author Name: ";
        getline(cin,b[i].author);

        cout<<"Enter Price: ";
        cin>>b[i].price;

        cout<<"Enter Quantity: ";
        cin>>b[i].quantity;
    }
    }

    void displaydata(book b[], int n){
    for(int i=0;i<n;i++){

        cout<<"\nBook ID: "<<b[i].bookid;
        cout<<"\nTitle: "<<b[i].title;
        cout<<"\nAuthor: "<<b[i].author;
        cout<<"\nPrice: "<<b[i].price;
        cout<<"\nQuantity: "<<b[i].quantity<<"\n";
    }
}
    void searchbook(book b[], int n){

    int id;
    cout<<"Enter Book ID to Search: ";
    cin>>id;

    for(int i=0;i<n;i++){
    
        if(id==b[i].bookid){
            cout<<"\nBook Found\n";
            cout<<"Title: "<<b[i].title<<endl;
            cout<<"Author: "<<b[i].author<<endl;
            cout<<"Price: "<<b[i].price<<endl;
            cout<<"Quantity: "<<b[i].quantity<<endl;
            return;
        }
    }
    cout<<"Book Not Found\n";
}   
    void update(book b[], int n){

    int id;

    cout<<"Enter Book ID to Update: ";
    cin>>id;

    for(int i=0;i<n;i++){

        if(id==b[i].bookid){

            cin.ignore();

            cout<<"Enter New Title: ";
            getline(cin,b[i].title);

            cout<<"Enter New Author: ";
            getline(cin,b[i].author);

            cout<<"Enter New Price: ";
            cin>>b[i].price;

            cout<<"Enter New Quantity: ";
            cin>>b[i].quantity;

            cout<<"Record Updated Successfully\n";
            return;
        }
    }
    cout<<"Book Not Found\n";
}
    void expensivebook(book b[], int n){

    float max=b[0].price;
    string expensive=b[0].title;

    for(int i=1;i<n;i++){

        if(b[i].price>max){

            max=b[i].price;
            expensive=b[i].title;
        }
    }

    cout<<"\nMost Expensive Book: "<<expensive;
    cout<<"\nPrice: "<<max<<endl;
}

    void deletebook(book b[], int &n){

    int id;

    cout<<"Enter Book ID to Delete: ";
    cin>>id;

    int pos=-1;

    for(int i=0;i<n;i++){

        if(b[i].bookid==id){

            pos=i;
            break;
        }
    }
    if(pos==-1){
        cout<<"Book Not Found\n";
        return;
    }

    for(int i=pos;i<n-1;i++){

        b[i]=b[i+1];
    }

    n--;
    cout<<"Book Deleted Successfully\n";


}};
int main(){

    cout<<"******** LIBRARY MANAGEMENT SYSTEM ********\n";

    book b[100];
    book obj;

    int n,choice;

    cout<<"Enter Number of Students: ";
    cin>>n;

    do{

        cout<<"\n1. Add Books";
        cout<<"\n2. Display Books";
        cout<<"\n3. Update Book";
        cout<<"\n4. Delete Book";
        cout<<"\n5. Search a Book";
        cout<<"\n6. Highest Price of Book";
        cout<<"\n7. Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            obj.addbook(b,n);
            break;

        case 2:
            obj.displaydata(b,n);
            break;

        case 3:
            obj.update(b,n);
            break;

        case 4:
            obj.deletebook(b,n);
            break;

        case 5:
            obj.searchbook(b,n);
            break;

        case 6:
            obj.expensivebook(b,n);
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
