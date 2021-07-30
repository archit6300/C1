#include <iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int flag=1;
    for(int i=2;i<n;i++)
        {
            if(n%i==0)
                {
                    flag=0;
                    break;
                }
        }
    if(flag)
        cout<<n<<" is a Prime No."<<endl;
    else
        cout<<n<<" is not a Prime No."<<endl;
}