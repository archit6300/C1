#include <iostream>
using namespace std;

main()
{
    int x,y;
    char op;
    cout<<"Enter X: 8";
    cin>>x;
    cout<<"Enter Y: ";
    cin>>y;
    cout<<"Enter Operand: ";
    cin>>op;

    switch(op)
        {
            case '+': 
                cout<<"X + Y = "<<x+y<<endl;
                break;
            case '-': 
                cout<<"X - Y = "<<x-y<<endl;
                break;
            case '*': 
                cout<<"X * Y = "<< x*y <<endl;
                break;
            case '/': 
                cout<<"X / Y = "<<x/y<<endl;
                break;
            default:
                cout<<"Error"<<endl;
        }

}