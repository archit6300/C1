//Butterfly Pattern
/*
n=4

        *______*(1,1)(1,8)=>2*4-2*1=6
        **____**(2,1)(2,2)(2,7)(2,8)=>2*4-2*2=4
        *_*__*_*(3,1)(3,3)(3,6)(3,8)=>2*4-2*3=2
        *__**__*(4,1)(4,4)(4,5)(4,8)=>2*4-2*4=0
----------------------------------------------------------------
        *__**__*
        *_*__*_*
        **____**
        *______*


        *      *
        **    **
        * *  * *
        *  **  *
        *  **  *
        * *  * *
        **    **
        *      *

*/
#include <iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                {
                        if(j==1 || j==i)
                            cout<<"*";
                        else
                            cout<<" ";
                }
                for(int j=1;j<=2*(n-i);j++)
                    {
                            cout<<" ";
                    }
                for(int j=1;j<=i;j++)
                    {
                            if(j==1 || j==i)
                                cout<<"*";
                            else
                                cout<<" ";
                    }
            cout<<endl;
        }
    for(int i=n;i>0;i--)
        {
            for(int j=1;j<=i;j++)
                {
                        if(j==1 || j==i)
                            cout<<"*";
                        else
                            cout<<" ";
                }
                for(int j=1;j<=2*(n-i);j++)
                    {
                            cout<<" ";
                    }
                for(int j=1;j<=i;j++)
                    {
                            if(j==1 || j==i)
                                cout<<"*";
                            else
                                cout<<" ";
                    }
            cout<<endl;
        }
}