#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin >> n;
    int a[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i];

    bool b[n];
    for(int i=0;i<n;i++)
        b[i]=0;

    for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
                b[a[i]]=1;
        }
    int ans=-1;
    for(int i=0;i<n;i++)
        {
            if(b[i]==0)
                {
                    ans=i;
                    break;
                }
        }
    cout<<ans<<endl;
    
}