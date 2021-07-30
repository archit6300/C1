/*
n=4

  *   *
 * * * *
*   *   *

*/

#include <iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=3;i++)
        {
            if(i==1)
                {
                for(int j=1;j<=3-i;j++)
                    cout<<" ";
                for(int j=0;j<n-6;j++)
                    {
                        if(j%2==0)
                            cout<<"* ";
                        else   
                            cout<<"  ";
                    }
                cout<<endl;
            }
            else if(i==2)
                {
                for(int j=1;j<=3-i;j++)
                    cout<<" ";
                for(int j=0;j<=n-2;j++)
                    {
                        if(j%2==0)
                            cout<<"*";
                        else   
                            cout<<" ";
                    }
                cout<<endl;
            }
            else
            {
                for(int j=1;j<=n-4;j++)
                    {
                        if(j%2==0)
                            cout<<"  ";
                        else   
                            cout<<"* ";
                    }
                cout<<endl;
                }
        }
}