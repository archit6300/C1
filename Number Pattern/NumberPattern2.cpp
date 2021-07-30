//Flloyd's Triangle
#include<iostream>
using namespace std;

main()
{
    int n,x,k;
    cin>>n;
    k=1;
    x=(n*(n+1))/2;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                {
                    cout<<k<<" ";
                    k++;
                }
            cout<<endl;

        }
}