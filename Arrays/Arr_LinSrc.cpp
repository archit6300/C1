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
    int key;
    cin>>key;
    int flag=0;
    for(int i=0;i<n;i++)
        {
            if(key==arr[i])
                {
                    cout<<i<<endl;
                    break;
                }
            else
                {
                    flag=1;
                }
        }
    if(flag)
        cout<<-1<<endl;

}