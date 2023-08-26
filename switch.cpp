#include <iostream>
using namespace std;
int main()
{
    int inta, intb;
    char operator1;
    cout << "Enter the first integer" << endl;
    cin >> inta;
    cout << "Enter the second integer" << endl;
    cin >> intb;
    cout << "What operator do you want ro perform ?" << endl;
    cin >> operator1;
    switch (operator1)
    {
        case '+':
            cout << "After addition the result is " << inta + intb;
            break;
        case '-':
            cout << "After subtraction the result is " << inta - intb;
            break;
        case '*':
            cout << "After multiplication the result is " << inta * intb;
            break;
        case '/':
            cout << "After division the result is " << inta / intb;
            break;
        case '%':
            cout << "After modulus the result is " << inta % intb;
            break;
        default:
            cout << "Please enter some legal data " << endl;
    }
    return 0;
}
//OUTPUT
// Enter the first integer
// 2
// Enter the second integer
// 3
// What operator do you want ro perform ?
// +
// After addition the result is 5