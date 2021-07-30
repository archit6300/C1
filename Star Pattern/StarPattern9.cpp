/*
n=5

____*
___*_*
__*___*
_*_____*
*____.___*
*____.___*
_*___.__*
__*__._*
___*_.*
____*
(1,5)
(2,4)(2,2)
(3,3)(3,3)
(4,2)(4,4)
(5,1)(5,5)
(5,1)(5,5)
(4,2)(4,4)
(3,3)(3,3)
(2,4)(2,2)
(1,5)  

*/
#include <iostream>
using namespace std;

main()
{
    int n;
    cin>>n;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n-i;j++)
                    cout<<" ";
                for(int j=1;j<=2*i-1;j++)
                    {
                        if(j==1 || j==2*i-1)
                            cout<<"*";
                        else
                            cout<<" ";
                    }
                cout<<endl;
            }
            for(int i=n;i>0;i--)
            {
                for(int j=1;j<=n-i;j++)
                    cout<<" ";
                for(int j=1;j<=2*i-1;j++)
                    {
                        if(j==1 || j==(2*i-1))
                            cout<<"*";
                        else
                            cout<<" ";
                    }
                cout<<endl;
            }
}