#include <bits/stdc++.h>
using namespace std;


main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

    int mx=arr[0];
    for(int i=0;i<n;i++)
        {
            if(mx<arr[i])
                {
                    cout<<arr[i]<<" ";
                    mx=arr[i];
                }
            else
                {
                    cout<<mx<<" ";
                }
        }
}