#include <iostream>
#include <bits/stdc++.h>

using namespace std;

main()
{
    int n;
    cin>>n;

    cin.ignore();

    char arr[n+1];
    cin.getline(arr, n);

    cin.ignore();

    int i=0;
    int mx=INT_MIN;
    int len;
    int st=0, maxst=0;
    while(1)
        {
            if(arr[i]== ' ' || arr[i] == '\0')
                {
                    if(len>mx)
                        {
                            mx=len;
                            maxst=st;
                        }
                    len=0;
                    st=i+1;
                }
            else
                len++;

            if(arr[i]=='\0')
                break;
            
            i++;

        }
    
    cout<<"Max length is"<<mx;
}