#include <iostream>
using namespace std;
int fact(int x)
{
    int fact=1;
    for(int i=x;i>0;i--)
        {
            fact*=i;
        }
    return fact;
}
main()
{
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;
}