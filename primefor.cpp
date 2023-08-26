#include <iostream>
using namespace std;
int main()
{
    
    int number;
    cout << "Enter the number:" << endl;
    cin >> number;
    bool isPrime = 1;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {

            isPrime = 0; 
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << number << " is  not prime number " << endl;
    }
    else
    {
        cout << number << " is a prime number ";
    }
    
}
//OUTPUT
// Enter the number:
// 5
// 5 is a prime number

// Enter the number:
// 4
// 4 is  not prime number
