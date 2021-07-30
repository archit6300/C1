/*

*****
****
***
**
*

*/
#include <iostream>
using namespace std;
main()
{
    int row,col;
    cin>>row;
    for(int i=1;i<=row;i++)
        {
            for(int j=row;j>=i;j--)
                {
                    cout<<"*";
                }
            cout<<endl;
        }
}