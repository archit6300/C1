/*
12345
1234
123
12
1
*/
#include <iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=n;i>0;i--)
        {
            for(int j=1;j<=i;j++)
                {
                    cout<<j<<" ";
                }
            cout<<endl;
        }
}