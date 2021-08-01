#include <iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int i=n,fact=1;
    while(i>0)
        {
            fact*=i;
            i--;
        }
    cout<<fact<<endl;
}