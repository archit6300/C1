#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int n;
    cin>>n;
    int i=n;
    int sum=0;
    // cout<<"i= "<<i<<" sum= "<<sum<<endl;
    while(i>0)
        {
            int x=i%10;
            // cout<<"x= "<<x;
            sum += pow(x,3);
            i/=10;
            // cout<<" i= "<<i<<" sum= "<<sum<<" P= "<<pow(x,3)<<endl;
        }
    if(sum==n)
        cout<<"Armstrong No"<<endl;
    else
        cout<<"Not Armstrong No"<<endl;
}