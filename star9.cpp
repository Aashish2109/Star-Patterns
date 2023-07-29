#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout<<"Enter the number of rows:"<<endl;
    cin>>rows;
    cout<<"Enter the number of columns:"<<endl;
    cin>>columns;
    int count=1;
    int i=1;
    while(i<=rows)
    {
        int j=1; 
        while(j<=i) 
        {
            cout<< count <<" "; 
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
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15