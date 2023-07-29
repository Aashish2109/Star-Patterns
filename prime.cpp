#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the input:" << endl;
    cin >> number;
    int divisor = 2;
    while (divisor < number)

    {
        if (number % divisor != 0)
        {
            cout << number << "is prime" << endl;
        }
        else
        {
            cout << number << "is not prime" << endl;
        }
        divisor = divisor + 1;
    }
}