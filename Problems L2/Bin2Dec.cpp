#include <iostream>
using namespace std;

int bin2dec(int n)
{
    //101
    int sum=0;
    int i=n;
    int x=1;
    while(i>0)
        {
            int y=i%10;
            sum+=x*y;
            x*=2;
            i/=10;
        }
    return sum;
}

main()
    {
        int n;
        cin>>n;
        cout<<bin2dec(n)<<endl;
    }