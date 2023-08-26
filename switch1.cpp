#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter the amount:";
    cin>>amount;
    
    switch(amount)
    {
        case 2000:
        cout<<"Number of 2000 notes "<<amount/2000<<endl;
        if(amount/2000==amount)
        {
            break;
        }
        case 500:
        cout<<"Number of 500 notes "<<amount/500<<endl;
         if(amount/2000==amount)
        {
            break;
        }
        case 100:
        cout<<"Number of 100 notes "<<amount/200<<endl;
         if(amount/2000==amount)
        {
            break;
        }
       case 50:
        cout<<"Number of 50 notes "<<amount/50<<endl; 
         if(amount/2000==amount)
        {
            break;
        }
       case 20:
        cout<<"Number of 20 notes "<<amount/20<<endl;
         if(amount/2000==amount)
        {
            break;
        } 
       case 10:
        cout<<"Number of 10 notes "<<amount/10<<endl;
         if(amount/2000==amount)
        {
            break;
        } 
       case 5:
        cout<<"Number of 5 notes "<<amount/5<<endl; 
         if(amount/2000==amount)
        {
            break;
        }
       case 2:
        cout<<"Number of 2 notes "<<amount/2<<endl;
         if(amount/2000==amount)
        {
            break;
        } 
       case 1:
        cout<<"Number of 1 notes "<<amount/1<<endl;
         if(amount/2000==amount)
        {
            break;
        } 
        default:"Invalid Amount";
    }
}
//OUTPUT
// Enter the amount:2000
// Number of 2000 notes 1
// Number of 500 notes 4
// Number of 100 notes 10
// Number of 50 notes 40
// Number of 20 notes 100
// Number of 10 notes 200
// Number of 5 notes 400
// Number of 2 notes 1000
// Number of 1 notes 2000