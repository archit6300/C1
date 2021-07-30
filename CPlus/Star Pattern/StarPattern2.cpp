/**
 * * * * *
 *       *
 *       *
 *       *
 * * * * *

*/

#include <iostream>
using namespace std;

main()
{
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
        {
            if(i==1 || i==row)
                {
                    for(int j=1;j<=col;j++)
                        {
                            cout<<"* ";
                        }
                    cout<<endl;
                }
            else
                {
                    cout<<"*";
                    for(int j=1;j<col+3;j++)
                        {
                            cout<<" ";
                        }
                    cout<<"*"<<endl;
                }
        }
}