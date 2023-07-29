#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout<<"Enter the Rows :"<<endl;
    cin>>rows;
    cout<<"Enter the Columns :"<<endl;
    cin>>columns;
    int i=1;
    while(i<=rows)
    {
        int j=1;
        while(j<=columns)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
//OUTPUT
// Enter the Rows :
// 5
// Enter the Columns :
// 5
// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4 
// 5 5 5 5 5 