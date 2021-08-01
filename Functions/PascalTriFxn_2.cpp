#include <iostream>
using namespace std;

int fact(int x)
{
    int fac=1;
    for(int i=x;i>0;i++)
        {
            fac*=i;
        }               
    return fac;
}

int comb(int n,int r)
{
    int nCr= (fact(n)/(fact(n-r)*fact(r)));
    return nCr;
}

main()  
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
                {
                            cout<<comb(i,j)<<" ";
                }
            cout<<endl;
        }
}