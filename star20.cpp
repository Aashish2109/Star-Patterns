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
        int j=1;
        char count='A'+rows-i;
        while(j<=i) 
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
// 4
// Enter the number of columns:
// 4

// D
// C D
// B C D
// A B C D