/*

    *
   **
  ***
 ****
*****
*/
#include <iostream>
using namespace std;
main()
{
    int row,col;
    cin>>row;
    for(int i=row;i>0;i--)
        {
            for(int j=1;j<=row;j++)
                {
                    if(j<i)
                        cout<<"  ";
                    else
                        cout<<"* ";
                }
            cout<<endl;
        }
}