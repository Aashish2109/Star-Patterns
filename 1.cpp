#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout<<"Enter the number of rows :"<<endl;
    cin>>rows;
    cout<<"Enter the number of columns :"<<endl;
    cin>>columns;
    for(int i=0;i<rows;i++)
    {
        for(int j=i;j<columns;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
//OUTPUT
// Enter the number of rows :
// 5
// Enter the number of columns :
// 5

//  *  *  *  *  * 
//  *  *  *  * 
//  *  *  * 
//  *  * 
//  *