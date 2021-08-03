#include <bits/stdc++.h>
#include <climits>
using namespace std;

main()
{
    int arr[5];
    int maxn=INT_MIN;
    int minn=INT_MAX;

    for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    for(int i=0;i<5;i++)
        {
            maxn=max(maxn,arr[i]);
            minn=min(minn,arr[i]);
        }
    cout<<maxn<<" "<<minn<<endl;
}