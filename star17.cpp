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
    char count='A';
    while(i<=rows)
    {
        char value=count;
        int j=1;
        while(j<=columns) 
        {
            cout<<value<<" "; 
            value++;
            j++; 
        }
        cout<<"\n";
        i++;
        count++;
    }
    return 0;
}
//OUTPUT
// Enter the number of rows:
// 5
// Enter the number of columns:
// 5
// A B C D E
// B C D E F
// C D E F G
// D E F G H
// E F G H I 