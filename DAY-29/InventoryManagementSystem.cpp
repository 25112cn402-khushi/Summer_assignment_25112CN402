#include <iostream>
#include <string>
using namespace std;

class product
{
public:
    int productid;
    string productname;
    float price;
    int quantity;

    void addproduct(product p[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "\nENTER DETAILS OF PRODUCT " << i + 1 << endl;

            cout << "ENTER PRODUCT ID: ";
            cin >> p[i].productid;

            cin.ignore();

            cout << "ENTER PRODUCT NAME: ";
            getline(cin, p[i].productname);

            cout << "ENTER PRICE: ";
            cin >> p[i].price;

            cout << "ENTER QUANTITY: ";
            cin >> p[i].quantity;
        }

        cout << "\nPRODUCTS ADDED SUCCESSFULLY.\n";
    }

    void displayproduct(product p[], int n)
    {
        cout << "\n******** PRODUCT DETAILS ********\n";

        for (int i = 0; i < n; i++)
        {
            cout << "\nPRODUCT " << i + 1 << endl;
            cout << "PRODUCT ID   : " << p[i].productid << endl;
            cout << "PRODUCT NAME : " << p[i].productname << endl;
            cout << "PRICE        : " << p[i].price << endl;
            cout << "QUANTITY     : " << p[i].quantity << endl;
        }
    }

    void updateproduct(product p[], int n)
    {
        int id;

        cout << "ENTER PRODUCT ID TO UPDATE: ";
        cin >> id;

        for (int i = 0; i < n; i++)
        {
            if (p[i].productid == id)
            {
                cin.ignore();

                cout << "ENTER NEW PRODUCT NAME: ";
                getline(cin, p[i].productname);

                cout << "ENTER NEW PRICE: ";
                cin >> p[i].price;

                cout << "ENTER NEW QUANTITY: ";
                cin >> p[i].quantity;

                cout << "\nPRODUCT UPDATED SUCCESSFULLY.\n";
                return;
            }
        }

        cout << "PRODUCT NOT FOUND.\n";
    }

    void deleteproduct(product p[], int &n)
    {
        int id;

        cout << "ENTER PRODUCT ID TO DELETE: ";
        cin >> id;

        for (int i = 0; i < n; i++)
        {
            if (p[i].productid == id)
            {
                for (int j = i; j < n - 1; j++)
                {
                    p[j] = p[j + 1];
                }

                n--;

                cout << "\nPRODUCT DELETED SUCCESSFULLY.\n";
                return;
            }
        }

        cout << "PRODUCT NOT FOUND.\n";
    }
    void searchproduct(product p[], int n){
        int id;
        cout << "ENTER PRODUCT ID TO SEARCH: ";
        cin >> id;
        
        for (int i = 0; i < n; i++)
        {
            if (p[i].productid == id)
            {
                cout << "\nPRODUCT FOUND\n";
                cout << "PRODUCT ID   : " << p[i].productid << endl;
                cout << "PRODUCT NAME : " << p[i].productname << endl;
                cout << "PRICE        : " << p[i].price << endl;
                cout << "QUANTITY     : " << p[i].quantity << endl;

            return;
        }
    }

    cout << "PRODUCT NOT FOUND.\n";
}
};

int main()
{
    product p[100];
    product obj;

    int choice;
    int n;

    cout << "ENTER NUMBER OF PRODUCTS: ";
    cin >> n;

    do
    {
        cout << "\n******** INVENTORY MANAGEMENT SYSTEM ********\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Update Product\n";
        cout << "4. Delete Product\n";
        cout << "5. Search Product\n";
        cout << "6. EXIT!\n";

        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.addproduct(p, n);
            break;

        case 2:
            obj.displayproduct(p, n);
            break;

        case 3:
            obj.updateproduct(p, n);
            break;

        case 4:
            obj.deleteproduct(p, n);
            break;
        
        case 5:
           obj.searchproduct(p,n);
           break;

        case 6:
            cout << "\nTHANK YOU!\n";
            break;

        default:
            cout << "\nINVALID CHOICE.\n";
        }

    } while (choice != 5);

    return 0;
}
