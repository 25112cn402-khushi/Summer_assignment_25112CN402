#include <iostream>
using namespace std;

int main() {

    int choice;
    float num1, num2;

    do {

        cout << "\n******** CALCULATOR ********\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice){

        case 1:
            cout << "Enter Two Numbers: ";
            cin >> num1 >> num2;
            cout << "Addition = " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Enter Two Numbers: ";
            cin >> num1 >> num2;
            cout << "Subtraction = " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Enter Two Numbers: ";
            cin >> num1 >> num2;
            cout << "Multiplication = " << num1 * num2 << endl;
            break;

        case 4:
            cout << "Enter Two Numbers: ";
            cin >> num1 >> num2;

            if(num2 != 0)
                cout << "Division = " << num1 / num2 << endl;
            else
                cout << "Division by Zero is not allowed.\n";

            break;

        case 5:
            int a, b;

            cout << "Enter Two Integers: ";
            cin >> a >> b;

            if(b != 0)
                cout << "Modulus = " << a % b << endl;
            else
                cout << "Modulus by Zero is not allowed.\n";

            break;

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}
