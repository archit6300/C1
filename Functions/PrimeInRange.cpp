#include <iostream>
#include <math.h>
using namespace std;
int prime(int x);
main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        {
            if(prime(i))
                {
                    cout<<i<<endl;
                }
            else
                continue;
        }
}
int prime(int x)
{
    int flag=1;
    for(int j=2;j<x;j++)
        {
            if(x%j==0)
                {
                    flag=0;
                    return 0;
                    break;
                }
        }
    if(flag==1)
        {
            return 1;
        }
}