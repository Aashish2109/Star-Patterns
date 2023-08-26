#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout<<"Enter the number of rows :"<<endl;
    cin>>rows;
    cout<<"Enter the number of columns :"<<endl;
    cin>>columns;
    int i=0;
    while(i<rows)
    {
        int space=i;
        while(space)
        {
        cout<<" "; 
        space--;
        }
        int j=rows;
        while(j>i)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}
//OUTPUT

// Enter the number of rows :
// 5
// Enter the number of columns :
// 5

// *****
//  ****
//   ***
//    **
//     *