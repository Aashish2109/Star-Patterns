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
        int j=1;
        while(j<=i) 
        {
             
            cout<<count<<" "; 
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
// 26
// Enter the number of columns:
// 26
// A
// B B
// C C C
// D D D D
// E E E E E 
// F F F F F F
// G G G G G G G
// H H H H H H H H 
// I I I I I I I I I
// J J J J J J J J J J 
// K K K K K K K K K K K
// L L L L L L L L L L L L
// M M M M M M M M M M M M M 
// N N N N N N N N N N N N N N
// O O O O O O O O O O O O O O O 
// P P P P P P P P P P P P P P P P
// Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q 
// R R R R R R R R R R R R R R R R R R
// S S S S S S S S S S S S S S S S S S S 
// T T T T T T T T T T T T T T T T T T T T
// U U U U U U U U U U U U U U U U U U U U U 
// V V V V V V V V V V V V V V V V V V V V V V
// W W W W W W W W W W W W W W W W W W W W W W W 
// X X X X X X X X X X X X X X X X X X X X X X X X
// Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y
// Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z