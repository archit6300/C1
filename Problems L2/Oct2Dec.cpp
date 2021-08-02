#include <iostream>
using namespace std;

void oct2dec(int m)
{
    int x=1;
    int ans=0;
    int i=m;
    while(i>0)
        {
            int y=i%10;
            ans+=x*y;
            x*=8;
            i/=10;
        }
    cout<<"Answer is "<<ans<<endl;
}

main()
{
    int n;
    cin>>n;
    oct2dec(n);
}