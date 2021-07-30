/*
n=4

  *___*
 *_*_*_*
*___*___*

*/

#include <iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=3-i;j++)
                    cout<<" ";
            for(int j=3-i;j<=n;j++)
                {
                    if(i%2!=0)
                        {
                            if((j+i)%4==0)
                                cout<<"*";
                            else   
                                cout<<" ";
                        }
                    else
                        {
                            if((j+i)%2==0)
                                cout<<"*";
                            else   
                                cout<<" ";
                        }
                }
            cout<<endl;
        }
}