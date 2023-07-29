#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout<<"Enter the number of rows:"<<endl;
    cin>>rows;
    cout<<"Enter the number of columns:"<<endl;
    cin>>columns;
    int i=1;
    while(i<rows)
    {
        int j=1;
        while(j<=columns)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}
//OUTPUT
// Enter the number of rows:
// 4
// Enter the number of columns:
// 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4