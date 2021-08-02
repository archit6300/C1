#include <iostream>
using namespace std;

string check(int x)
{
            if(x%2==0)
                {
                    return "Even";
                }
            else
                {
                    return "Odd";
                }
}
main()
{
    int n;
    cin>>n;
    cout<<"Given Number is "<<check(n)<<endl;
}