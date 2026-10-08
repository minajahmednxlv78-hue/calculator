#include <iostream>
using namespace std;

int main()
{
    float a, b;
    int choice;

    do
    {
        cout << "\n----- CALCULATOR -----" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a + b << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a - b << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a * b << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Cannot divide by zero!" << endl;

            break;

        case 5:
            cout << "Calculator closed." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}