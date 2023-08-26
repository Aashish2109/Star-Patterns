#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "Enter the number of rows :" << endl;
    cin >> rows;
    cout << "Enter the number of columns :" << endl;
    cin >> columns;
    int i = 1;
    while (i <= rows)
    {
        int space = rows - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        int k=i-1;
        while(k)
        {
            cout<<k;
            k--;
        }
        cout << endl;
        i++;
    }
}

//OUTPUT
// Enter the number of rows :
// 5
// Enter the number of columns :
// 5

//     1
//    121
//   12321
//  1234321
// 123454321