#include <iostream>
using namespace std;

int main()
{
    int choice;
    int id[100], quantity[100];
    string name[100];
    float price[100];
    int n = 0;

    do
    {
        cout << "\n----- Inventory Management System -----";
        cout << "\n1. Add Product";
        cout << "\n2. Display Products";
        cout << "\n3. Search Product";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Product ID: ";
                cin >> id[n];

                cout << "Enter Product Name: ";
                cin >> name[n];

                cout << "Enter Product Price: ";
                cin >> price[n];

                cout << "Enter Product Quantity: ";
                cin >> quantity[n];

                n++;

                cout << "Product added successfully";
                break;


            case 2:
                cout << "\nProduct Details:\n";

                for(int i = 0; i < n; i++)
                {
                    cout << "\nID: " << id[i];
                    cout << "\nName: " << name[i];
                    cout << "\nPrice: " << price[i];
                    cout << "\nQuantity: " << quantity[i];
                    cout << "\n";
                }

                break;


            case 3:
            {
                int searchId;
                bool found = false;

                cout << "Enter Product ID to search: ";
                cin >> searchId;

                for(int i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        cout << "\nProduct Found";
                        cout << "\nName: " << name[i];
                        cout << "\nPrice: " << price[i];
                        cout << "\nQuantity: " << quantity[i];

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Product not found";

                break;
            }


            case 4:
                cout << "Exit";
                break;


            default:
                cout << "Invalid Choice";
        }

    } while(choice != 4);

    return 0;
}