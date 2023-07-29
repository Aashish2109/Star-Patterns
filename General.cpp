#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    cout << "Size of int is" << sizeof(a) << endl;
    char b = 'a';
    cout << "Size of char is" << sizeof(b) << endl;
    float c = 1.1;
    cout << "Size of float is" << sizeof(c) << endl;
    double d = 1.12;
    cout << "Size of double is" << sizeof(d) << endl;
    int e = 'z';
    cout << e << endl;
    char ch = 98;
    cout << ch << endl;
    cout << "Boolean values:" << endl;
    int f = 12, g = 13;
    bool first = (f == g);
    cout << first<< endl;
    bool second = (f < g);
    cout << second << endl;
    bool third = (f > g);
    cout << third << endl;
    bool fourth = (f <= g);
    cout << fourth << endl;
    bool fifth = (f >= g);
    cout << fifth << endl;
    bool sixth = (f != g);
    cout << sixth << endl;
    bool seventh = (f & g);
    cout << seventh << endl;
    bool eight = 3;
    cout << !eight << endl;
}