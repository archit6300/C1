#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int currSum=0;
    int mx=INT_MIN;

    for(int i=0;i<n;i++)
        {
            currSum+=a[i];
            if(currSum<0)
                currSum=0;
            mx=max(mx,currSum);
        }
    cout<<"Max = "<<mx<<endl;
}