/*
n=5
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
#include <iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=2*n-2*i;j++)
                {
                    cout<<" ";
                }
            for(int j=i;j>0;j--)
                {
                    cout<<j<<" ";
                }
            for(int j=2;j<=i;j++)
                {
                    cout<<j<<" ";
                }
            cout<<endl;
        }
}