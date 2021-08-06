#include <bits/stdc++.h>
using namespace std;

main()
{
    int m,n;
    cin>>m>>n;

    int a[m][n];

    for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                {
                    cin>>a[i][j];
                }
        }

    int key;
    bool flag=0;
    cin>>key;
    for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                {
                    if(a[i][j]==key)
                        {
                            flag=1;
                        }
                }
        }
    if(flag)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
}