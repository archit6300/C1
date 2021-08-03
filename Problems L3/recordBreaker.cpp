#include <bits/stdc++.h>
using namespace std;

int mx(int arr[],int n)
    {

    }

main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int flag=0;
    int mm=arr[0];

    for(int i=0;i<n;i++)
        {
            if(arr[i]>mm)
                {
                    if(arr[i]>arr[i+1])
                        {
                            mm=arr[i]; 
                            flag=i;  
                        }
                    else    
                        {
                            mm=arr[i+1];
                            flag=i+1;
                        }
                }
        }
    cout<<flag<<endl;
}