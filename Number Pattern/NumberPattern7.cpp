/*
n=5
    1
   1 1 
  1 2 1
 1 3 3 1
1 4 6 4 1

*/
#include <iostream>
using namespace std;
main()
{
    int n,coef=1;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            for(int j=1;j<=n-i;j++)
                cout<<"  ";
            for(int j=0;j<=i;j++)
                {
                    if(i==0 || j==0)
                        coef=1;
                    else
                        coef=coef*(i-j+1)/j;
                    cout<<coef<<"   ";
                }
            cout<<endl;
        }
}