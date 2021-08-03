#include <bits/stdc++.h>
using namespace std;

int binSrc(int arr[],int n,int key)
    {
        int s=0,e=n;
        while(s<=e)
            {
                int mid=(s+e)/2;
                if(arr[mid]==key)
                    return mid;
                else if(arr[mid]>key)
                    {   
                        e=mid-1;
                    }
                else
                    s=mid+1; 
            }
        return -1;
    }

main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    int key;
    cin>>key;
    cout<<binSrc(arr,n,key)<<endl;

}