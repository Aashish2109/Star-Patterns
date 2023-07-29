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
    while(i<=rows)
    {
        int j=columns; /*j=1*/
        while(j>=1) /*j<=colums1*/
        {
            cout<<j<<" "; /*columns-j+1*/
            j--; /*j++*/
        }
        cout<<"\n";
        i++;
    }
    return 0;
}
//OUTPUT
// Enter the number of rows:
// 5
// Enter the number of columns:
// 5
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1