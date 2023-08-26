#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout<<"Enter the number of rows :"<<endl;
    cin>>rows;
    cout<<"Enter the number of columns :"<<endl;
    cin>>columns;
    int row=1;
    while(row<=rows)
    {
        int space=rows-row;
        while(space)
        {
        cout<<" ";
        space--;
        }
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}
//OUTPUT
// Enter the number of rows :
// 5
// Enter the number of columns :
// 5

//     *
//    **
//   ***
//  ****
// *****