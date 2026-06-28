#include <iostream>
#include <string>
using namespace std;

class employee{
public:
    int empid;
    string name;
    float salary;

    void addemployee(employee e[], int n){
        for(int i=0; i<n; i++){
            cout<<"Enter Employee ID: ";
            cin>>e[i].empid;
            cin.ignore();

            cout<<"Enter Name: ";
            getline(cin,e[i].name);

            cout<<"Enter Salary: ";
            cin>>e[i].salary;
        }
    }

    void displaydata(employee e[], int n){
        for(int i=0; i<n; i++){
            cout<<"\nEmployee ID: "<<e[i].empid;
            cout<<"\nName: "<<e[i].name;
            cout<<"\nSalary: "<<e[i].salary<<"\n";
        }
    }

    void searchemployee(employee e[], int n){
        int id;

        cout<<"Enter Employee ID to Search: ";
        cin>>id;

        for(int i=0; i<n; i++){
            if(id==e[i].empid){
                cout<<"\nEmployee Found\n";
                cout<<"Name: "<<e[i].name<<endl;
                cout<<"Salary: "<<e[i].salary<<endl;
                return;
            }
        }

        cout<<"Employee Not Found\n";
    }

    void update(employee e[], int n){
        int id;

        cout<<"Enter Employee ID to Update: ";
        cin>>id;

        for(int i=0; i<n; i++){
            if(id==e[i].empid){

                cin.ignore();

                cout<<"Enter New Name: ";
                getline(cin,e[i].name);

                cout<<"Enter New Salary: ";
                cin>>e[i].salary;

                cout<<"Record Updated Successfully\n";
                return;
            }
        }

        cout<<"Employee Not Found\n";
    }

    void highestsalary(employee e[], int n){
        float max=e[0].salary;
        string highest=e[0].name;

        for(int i=1; i<n; i++){
            if(e[i].salary>max){
                max=e[i].salary;
                highest=e[i].name;
            }
        }

        cout<<"\nEmployee with Highest Salary: "<<highest;
        cout<<"\nHighest Salary: "<<max<<endl;
    }

    void deleteemployee(employee e[], int &n){
        int id;

        cout<<"Enter Employee ID to Delete: ";
        cin>>id;

        int pos=-1;

        for(int i=0; i<n; i++){
            if(e[i].empid==id){
                pos=i;
                break;
            }
        }

        if(pos==-1){
            cout<<"Employee Not Found\n";
            return;
        }

        for(int i=pos; i<n-1; i++){
            e[i]=e[i+1];
        }

        n--;

        cout<<"Employee Deleted Successfully\n";
    }
};

int main(){

    cout<<"******** EMPLOYEE MANAGEMENT SYSTEM ********\n";

    employee e[100];
    employee obj;

    int n,choice;

    cout<<"Enter Number of Employees: ";
    cin>>n;

    do{

        cout<<"\n1. Add Employee";
        cout<<"\n2. Display Employees";
        cout<<"\n3. Update Employee";
        cout<<"\n4. Delete Employee";
        cout<<"\n5. Search Employee";
        cout<<"\n6. Highest Salary";
        cout<<"\n7. Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            obj.addemployee(e,n);
            break;

        case 2:
            obj.displaydata(e,n);
            break;

        case 3:
            obj.update(e,n);
            break;

        case 4:
            obj.deleteemployee(e,n);
            break;

        case 5:
            obj.searchemployee(e,n);
            break;

        case 6:
            obj.highestsalary(e,n);
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
