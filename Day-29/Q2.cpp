#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, i, element, pos;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n----- Menu Driven Array Operations -----";
        cout << "\n1. Display Array";
        cout << "\n2. Insert Element";
        cout << "\n3. Delete Element";
        cout << "\n4. Search Element";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Array elements are: ";
                for(i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                break;

            case 2:
                cout << "Enter element to insert: ";
                cin >> element;

                cout << "Enter position: ";
                cin >> pos;

                for(i = n; i >= pos; i--)
                {
                    arr[i] = arr[i-1];
                }

                arr[pos-1] = element;
                n++;

                cout << "Element inserted successfully";
                break;

            case 3:
                cout << "Enter position to delete: ";
                cin >> pos;

                for(i = pos-1; i < n-1; i++)
                {
                    arr[i] = arr[i+1];
                }

                n--;

                cout << "Element deleted successfully";
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> element;

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == element)
                    {
                        cout << "Element found at position " << i+1;
                        break;
                    }
                }

                if(i == n)
                {
                    cout << "Element not found";
                }
                break;

            case 5:
                cout << "Exit";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 5);

    return 0;
}