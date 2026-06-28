#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    int rollno;
    string name;
    float english, maths, science, computer, hindi;
    float total, percentage;
    char grade;

    void addstudent(student s[], int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"\nEnter Roll No: ";
            cin>>s[i].rollno;
            cin.ignore();

            cout<<"Enter Name: ";
            getline(cin,s[i].name);

            cout<<"Enter English Marks: ";
            cin>>s[i].english;

            cout<<"Enter Maths Marks: ";
            cin>>s[i].maths;

            cout<<"Enter Science Marks: ";
            cin>>s[i].science;

            cout<<"Enter Computer Marks: ";
            cin>>s[i].computer;

            cout<<"Enter Hindi Marks: ";
            cin>>s[i].hindi;

            s[i].total = s[i].english + s[i].maths + s[i].science +
                         s[i].computer + s[i].hindi;

            s[i].percentage = s[i].total / 5;

            if(s[i].percentage >= 90)
                s[i].grade = 'A';
            else if(s[i].percentage >= 80)
                s[i].grade = 'B';
            else if(s[i].percentage >= 70)
                s[i].grade = 'C';
            else if(s[i].percentage >= 60)
                s[i].grade = 'D';
            else
                s[i].grade = 'F';
        }
    }

    void displaydata(student s[], int n)
    {
        cout<<"\n******** MARKSHEET ********\n";

        for(int i=0;i<n;i++)
        {
            cout<<"\nRoll No : "<<s[i].rollno<<endl;
            cout<<"Name : "<<s[i].name<<endl;

            cout<<"English : "<<s[i].english<<endl;
            cout<<"Maths : "<<s[i].maths<<endl;
            cout<<"Science : "<<s[i].science<<endl;
            cout<<"Computer : "<<s[i].computer<<endl;
            cout<<"Hindi : "<<s[i].hindi<<endl;

            cout<<"Total : "<<s[i].total<<endl;
            cout<<"Percentage : "<<s[i].percentage<<"%"<<endl;
            cout<<"Grade : "<<s[i].grade<<endl;
        }
    }

    void searchstudent(student s[], int n)
    {
        int roll;

        cout<<"Enter Roll No to Search: ";
        cin>>roll;

        for(int i=0;i<n;i++)
        {
            if(roll==s[i].rollno)
            {
                cout<<"\nStudent Found\n";

                cout<<"Name : "<<s[i].name<<endl;
                cout<<"English : "<<s[i].english<<endl;
                cout<<"Maths : "<<s[i].maths<<endl;
                cout<<"Science : "<<s[i].science<<endl;
                cout<<"Computer : "<<s[i].computer<<endl;
                cout<<"Hindi : "<<s[i].hindi<<endl;

                cout<<"Total : "<<s[i].total<<endl;
                cout<<"Percentage : "<<s[i].percentage<<"%"<<endl;
                cout<<"Grade : "<<s[i].grade<<endl;

                return;
            }
        }

        cout<<"Student Not Found\n";
    }

    void update(student s[], int n)
    {
        int roll;

        cout<<"Enter Roll No to Update: ";
        cin>>roll;

        for(int i=0;i<n;i++)
        {
            if(roll==s[i].rollno)
            {
                cin.ignore();

                cout<<"Enter New Name: ";
                getline(cin,s[i].name);

                cout<<"Enter English Marks: ";
                cin>>s[i].english;

                cout<<"Enter Maths Marks: ";
                cin>>s[i].maths;

                cout<<"Enter Science Marks: ";
                cin>>s[i].science;

                cout<<"Enter Computer Marks: ";
                cin>>s[i].computer;

                cout<<"Enter Hindi Marks: ";
                cin>>s[i].hindi;

                s[i].total = s[i].english + s[i].maths + s[i].science +
                             s[i].computer + s[i].hindi;

                s[i].percentage = s[i].total / 5;

                if(s[i].percentage >= 90)
                    s[i].grade='A';
                else if(s[i].percentage >= 80)
                    s[i].grade='B';
                else if(s[i].percentage >= 70)
                    s[i].grade='C';
                else if(s[i].percentage >= 60)
                    s[i].grade='D';
                else
                    s[i].grade='F';

                cout<<"Record Updated Successfully\n";
                return;
            }
        }

        cout<<"Student Not Found\n";
    }

    void topper(student s[], int n)
    {
        float max=s[0].percentage;
        string topper=s[0].name;

        for(int i=1;i<n;i++)
        {
            if(s[i].percentage>max)
            {
                max=s[i].percentage;
                topper=s[i].name;
            }
        }

        cout<<"\nTopper : "<<topper<<endl;
        cout<<"Highest Percentage : "<<max<<"%"<<endl;
    }

    void deletestudent(student s[], int &n)
    {
        int roll;

        cout<<"Enter Roll No to Delete: ";
        cin>>roll;

        int pos=-1;

        for(int i=0;i<n;i++)
        {
            if(s[i].rollno==roll)
            {
                pos=i;
                break;
            }
        }

        if(pos==-1)
        {
            cout<<"Student Not Found\n";
            return;
        }

        for(int i=pos;i<n-1;i++)
        {
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
