#include <bits/stdc++.h>
using namespace std;

main()
{
    int m1,n1;
    cin>>n1>>m1;

    int a[n1][m1];

    for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
                {
                    cin>>a[i][j];
                }
        }
    int m2,n2;
    cin>>n2>>m2;

    int b[n2][m2];

    for(int i=0;i<n2;i++)
        {
            for(int j=0;j<m2;j++)
                {
                    cin>>b[i][j];
                }
        }

    if(m1==m2)
        {

        }
    else
        cout<<"Error\n";


}