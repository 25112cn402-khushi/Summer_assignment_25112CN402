#include <iostream>
#include <string>
using namespace std;

class student{
public:
    int rollno;
    string name;
    float marks;

    void addstudent(student s[], int n){
        for(int i=0; i<n; i++){
            cout<<"Enter Roll No.: ";
            cin>>s[i].rollno;
            cin.ignore();

            cout<<"Enter Name: ";
            getline(cin,s[i].name);

            cout<<"Enter Marks: ";
            cin>>s[i].marks;
        }
    }

    void displaydata(student s[], int n){
        for(int i=0; i<n; i++){
            cout<<"\nRoll No.: "<<s[i].rollno;
            cout<<"\nName: "<<s[i].name;
            cout<<"\nMarks: "<<s[i].marks<<"\n";
        }
    }

    void searchstudent(student s[], int n){
        int roll;

        cout<<"Enter Roll No. to Search: ";
        cin>>roll;

        for(int i=0; i<n; i++){
            if(roll==s[i].rollno){
                cout<<"\nStudent Found\n";
                cout<<"Name: "<<s[i].name<<endl;
                cout<<"Marks: "<<s[i].marks<<endl;
                return;
            }
        }

        cout<<"Student Not Found\n";
    }

    void update(student s[], int n){
        int roll;

        cout<<"Enter Roll No. to Update: ";
        cin>>roll;

        for(int i=0; i<n; i++){
            if(roll==s[i].rollno){

                cin.ignore();

                cout<<"Enter New Name: ";
                getline(cin,s[i].name);

                cout<<"Enter New Marks: ";
                cin>>s[i].marks;

                cout<<"Record Updated Successfully\n";
                return;
            }
        }

        cout<<"Student Not Found\n";
    }

    void topper(student s[], int n){
        float max=s[0].marks;
        string topper=s[0].name;

        for(int i=1; i<n; i++){
            if(s[i].marks>max){
                max=s[i].marks;
                topper=s[i].name;
            }
        }

        cout<<"\nTopper: "<<topper;
        cout<<"\nMaximum Marks: "<<max<<endl;
    }

    void deletestudent(student s[], int &n){
        int roll;

        cout<<"Enter Roll No. to Delete: ";
        cin>>roll;

        int pos=-1;

        for(int i=0; i<n; i++){
            if(s[i].rollno==roll){
                pos=i;
                break;
            }
        }

        if(pos==-1){
            cout<<"Student Not Found\n";
            return;
        }

        for(int i=pos; i<n-1; i++){
            s[i]=s[i+1];
        }

        n--;

        cout<<"Student Deleted Successfully\n";
    }
};

int main(){

    cout<<"******** STUDENT MANAGEMENT SYSTEM ********\n";

    student s[100];
    student obj;

    int n,choice;

    cout<<"Enter Number of Students: ";
    cin>>n;

    do{

        cout<<"\n1. Add Student";
        cout<<"\n2. Display Students";
        cout<<"\n3. Update Student";
        cout<<"\n4. Delete Student";
        cout<<"\n5. Search Student";
        cout<<"\n6. Topper";
        cout<<"\n7. Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            obj.addstudent(s,n);
            break;

        case 2:
            obj.displaydata(s,n);
            break;

        case 3:
            obj.update(s,n);
            break;

        case 4:
            obj.deletestudent(s,n);
            break;

        case 5:
            obj.searchstudent(s,n);
            break;

        case 6:
            obj.topper(s,n);
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
