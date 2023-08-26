#include <iostream>
using namespace std;
int main()
{
   
   int rows;
    int columns;
    cout << "Enter the number of rows:" << endl;
    cin >> rows;
    cout << "Enter the number of columns:" << endl;
    cin >> columns;
    int spaces=0;
    int m=1;
    for(int i=rows;i>=1;i--)
    {
        int value=m;
        for(int j=1;j<=i;j++)
        {
            cout<<value;
        }
        for(int k=1;k<=spaces;k++)
        {
            cout<<"*";
        }
        spaces=spaces+2;
        for(int j=1;j<=i;j++)
        {
            cout<<value;
        }
        m++;
        cout<<endl;
    } 
   
}
//OUTPUT
// Enter the number of rows:
// 6
// Enter the number of columns:
// 6'

// 111111111111
// 22222**22222
// 3333****3333
// 444******444
// 55********55
// 6**********6