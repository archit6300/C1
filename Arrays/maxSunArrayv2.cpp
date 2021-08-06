#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int currSum[n+1];
    currSum[0]=0;

    for(int i=1;i<=n;i++)
        currSum[i]= currSum[i-1] + a[i-1];

    int mx=INT_MIN;

    for(int i=1;i<=n;i++)
        {
            int sum=0;
            for(int j=0;j<i-1;j++)
                {
                    sum=currSum[i]-currSum[j];
                    mx=max(mx,sum);
                }
        }
    cout<<"Max = "<<mx<<endl;
}