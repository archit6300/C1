#include <iostream>
using namespace std;

main()
{
    int n;
    cin>>n;
    int rev=0;
    int i=n;
    while(i>0)
        {
            rev = rev * 10 + i%10;
            i/=10;
        }
    cout<<rev<<endl;
}