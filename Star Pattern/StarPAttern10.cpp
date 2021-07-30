/**
n=5



*********
****_****(2,5)
***___***(3,4)(3,5)(3,6)
**_____**(4,3)(4,4)(4,5)(4,6)(4,7)
*_______*(5,2)(5,3)(5,4)(5,5)(5,6)(5,7)(5,8)
*_______*
**_____**
***___***
****_****
*********

 */

#include <iostream>
using namespace std;

main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
                for(int j=1;j<=2*n-1;j++)
                    {
                        if(i==1 || j<=n-i+1 || j>=n+i-1)
                            {
                                cout<<"*";
                            }
                        else
                            cout<<" ";
                    }
        cout<<endl;
        }
    for(int i=n;i>0;i--)
        {
                for(int j=1;j<=2*n-1;j++)
                    {
                        if(i==1 || j<=n-i+1 || j>=n+i-1)
                            {
                                cout<<"*";
                            }
                        else
                            cout<<" ";
                    }
        cout<<endl;
        }
}