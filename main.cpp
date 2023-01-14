#include <iostream>
#include <cmath>

#define endl '\n' // for endl

using namespace std;

void arithmetic()
{
    int op = 0;
    double num1 = 0;
    double num2 = 0;

    cout << "Select opeartion" << endl;
    cout << "[1] Addition" << endl;
    cout << "[2] Substraction" << endl;
    cout << "[3] Product" << endl;
    cout << "[4] Division" << endl;

    cin >> op;

    cout << "Enter the number:";
    cin >> num1;

    cout << "Enter second number:";
    cin >> num2;

    cout << "Result: ";

    switch (op)
    {
        case 1:
            cout << (num1 + num2);
            break;
        case 2:
            cout << (num1 - num2);
            break;
        case 3:
            cout << (num1 * num2);
            break;
        case 4:
            cout << (num1 / num2);
            break;
        default:
            cout << "Invalid operation";
            break;
    }
    cout << endl;
}

void trignometric()
{
    int op = 0;
    double val = 0.0;
    cout << "Select" << endl;
    cout << "[1] sine(rad)"<<endl;
    cout << "[2] cosine(rad)"<<endl;
    cout << "[3] tan(rad)"<<endl;
    cout << "Operation: ";
    cin >> op;
    cout << "Enter theta(rad) in radians: ";
    cin >> val;
    cout << "Result: ";
    switch (op)
    {
        case 1:
            cout << sin(val);
            break;
        case 2:
            cout << cos(val);
            break;
        case 3:
            cout << tan(val);
            break;
        default:
            cout << "Invalid operation";
            break;
    }
    cout << endl;
}

void exponential()
{
    double base = 0.0;
    double eee = 0.0;

    cout << "Enter base:";
    cin >> base;
    cout << "Enter expnent: ";
    cin >> eee;
    cout << "Result: ";
    cout << pow(base, eee) << endl;
}

void logarithmic()
{
    float val = 0.0;
    cout << "Enter the value to calculate the log(e): ";
    cin >> val;
    cout << "log to the base e is: " << log(val) << endl;
    cout << "log to the base 10 is: " << log10(val) << endl;
}

int main()
{
    int op = 0;
    char choice = 'y';
    cout << "Advanced Calculator"<<endl;
    cout << "[1] Arithmetic"<<endl;
    cout << "[2] Trignometric"<<endl;
    cout << "[3] Exponential"<<endl;
    cout << "[4] Logarithmic"<<endl;
    cout << "Your choice:"<<endl;

    while (choice == 'y')
    {
        cout << "Enter the type of operation you want to calculate\n";
        cin >> op;

        switch (op)
        {
            case 1:
                arithmetic();
                break;
            case 2:
                trignometric();
                break;
            case 3:
                exponential();
                break;
            case 4:
                logarithmic();
                break;
            default:
                cout << "Invalid Operation";
        }

        cout << "Do you want to continue? y/n" << endl;
        cin >> choice;
        if (choice == 'n')
        {
            break;
        }
    }
    return 0;
}