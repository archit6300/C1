#include <bits/stdc++.h>
using namespace std;

main()
{
    int m,n;
    cin>>n>>m;

    int a[n][m];

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
        }

    int b[m][n];

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    b[j][i]=a[i][j];
                }
        }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
                cout<<b[i][j]<<" ";
            }
        cout<<endl;
    }

}