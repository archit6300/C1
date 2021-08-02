#include <iostream>
using namespace std;

int sum(int n)
    {
        int sumN=0;
        for(int i=1;i<=n;i++)
            {
                sumN+=i;
            }
        return sumN;
    }

main()
    {
        int n;
        cin>>n;
        cout<<"Sum of first "<<n<<" Natural numbers is "<<sum(n)<<endl;
    }