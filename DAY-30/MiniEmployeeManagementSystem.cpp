#include <iostream>
#include <string>
using namespace std;

class employee
{
public:
    int empid;
    string name;
    float basicsalary, allowance, deduction, netsalary;

    void addemployee(employee e[], int n)
    {
        for(int i=0; i<n; i++)
        {
            cout<<"\nEnter Employee ID: ";
            cin>>e[i].empid;
            cin.ignore();

            cout<<"Enter Employee Name: ";
            getline(cin,e[i].name);

            cout<<"Enter Basic Salary: ";
            cin>>e[i].basicsalary;

            cout<<"Enter Allowance: ";
            cin>>e[i].allowance;

            cout<<"Enter Deduction: ";
            cin>>e[i].deduction;

            e[i].netsalary = e[i].basicsalary + e[i].allowance - e[i].deduction;

            cout<<"Net Salary: "<<e[i].netsalary<<endl;
        }
    }

    void displaydata(employee e[], int n)
    {
        cout<<"\n******** EMPLOYEE DETAILS ********\n";

        for(int i=0; i<n; i++)
        {
            cout<<"\nEmployee ID : "<<e[i].empid<<endl;
            cout<<"Name        : "<<e[i].name<<endl;
            cout<<"Basic Salary: "<<e[i].basicsalary<<endl;
            cout<<"Allowance   : "<<e[i].allowance<<endl;
            cout<<"Deduction   : "<<e[i].deduction<<endl;
            cout<<"Net Salary  : "<<e[i].netsalary<<endl;
        }
    }

    void searchemployee(employee e[], int n)
    {
        int id;

        cout<<"Enter Employee ID to Search: ";
        cin>>id;

        for(int i=0; i<n; i++)
        {
            if(id==e[i].empid)
            {
                cout<<"\nEmployee Found\n";
                cout<<"Employee ID : "<<e[i].empid<<endl;
                cout<<"Name        : "<<e[i].name<<endl;
                cout<<"Basic Salary: "<<e[i].basicsalary<<endl;
                cout<<"Allowance   : "<<e[i].allowance<<endl;
                cout<<"Deduction   : "<<e[i].deduction<<endl;
                cout<<"Net Salary  : "<<e[i].netsalary<<endl;
                return;
            }
        }

        cout<<"Employee Not Found\n";
    }

    void update(employee e[], int n)
    {
        int id;

        cout<<"Enter Employee ID to Update: ";
        cin>>id;

        for(int i=0; i<n; i++)
        {
            if(id==e[i].empid)
            {
                cin.ignore();

                cout<<"Enter New Name: ";
                getline(cin,e[i].name);

                cout<<"Enter New Basic Salary: ";
                cin>>e[i].basicsalary;

                cout<<"Enter New Allowance: ";
                cin>>e[i].allowance;

                cout<<"Enter New Deduction: ";
                cin>>e[i].deduction;

                e[i].netsalary = e[i].basicsalary + e[i].allowance - e[i].deduction;

                cout<<"Updated Net Salary: "<<e[i].netsalary<<endl;
                cout<<"Record Updated Successfully\n";
                return;
            }
        }

        cout<<"Employee Not Found\n";
    }

    void highestsalary(employee e[], int n)
    {
        float max=e[0].netsalary;
        string highest=e[0].name;

        for(int i=1; i<n; i++)
        {
            if(e[i].netsalary>max)
            {
                max=e[i].netsalary;
                highest=e[i].name;
            }
        }

        cout<<"\nEmployee with Highest Net Salary: "<<highest<<endl;
        cout<<"Highest Net Salary: "<<max<<endl;
    }

    void deleteemployee(employee e[], int &n)
    {
        int id;

        cout<<"Enter Employee ID to Delete: ";
        cin>>id;

        int pos=-1;

        for(int i=0; i<n; i++)
        {
            if(e[i].empid==id)
            {
                pos=i;
                break;
            }
        }

        if(pos==-1)
        {
            cout<<"Employee Not Found\n";
            return;
        }

        for(int i=pos; i<n-1; i++)
        {
            e[i]=e[i+1];
        }

        n--;

        cout<<"Employee Deleted Successfully\n";
    }
};

int main()
{
    employee e[100];
    employee obj;

    int n, choice;

    cout<<"******** EMPLOYEE MANAGEMENT SYSTEM ********"<<endl;

    cout<<"Enter Number of Employees: ";
    cin>>n;

    do
    {
        cout<<"\n========== MENU =========="<<endl;
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display Employees"<<endl;
        cout<<"3. Update Employee"<<endl;
        cout<<"4. Delete Employee"<<endl;
        cout<<"5. Search Employee"<<endl;
        cout<<"6. Employee with Highest Net Salary"<<endl;
        cout<<"7. Exit"<<endl;

        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice)
        {
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
                cout<<"Thank You!"<<endl;
                break;

            default:
                cout<<"Invalid Choice!"<<endl;
        }

    }while(choice!=7);

    return 0;
}
