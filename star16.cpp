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
        char count='A';
        int j=1;
        while(j<=columns) 
        {
             
            cout<<count<<" "; 
            count++;
            j++; 
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
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E