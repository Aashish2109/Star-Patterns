#include<iostream>
using namespace std;
int main()
{
    char input;
    cout<<"Enter your input:"<<endl;
    cin>>input;
    if(input>='A' && input<='Z')
    {
        cout<<input<<" "<<"is an uppercase"<<endl;
    }
    else if(input>='a' && input<='z')
    {
        cout<<input<<" "<<"is a lowercase"<<endl;
    }
    else{
        cout<<input<<" "<<" is a numeric value"<<endl;
    }
    return 0;
}
//OUTPUT
// Enter your input:
// 2
// 2  is a numeric value

// Enter your input:
// a
// a is a lowercase

// Enter your input:
// z
// z is a lowercase