#include <iostream>
using namespace std;

void pascal(int n)
{
    int coef=1;
    for(int i=0;i<n;i++)
        {
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

main()
{
    int n;
    cin>>n;
    pascal(n);
}