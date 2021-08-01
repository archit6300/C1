#include <iostream>
using namespace std;
void fibo(int x)
{
    int a=0,b=1,c=0,count=1;
    for(count=1;count<=x;)
        {
            cout<<a<<" ";
            c=a+b;
            a=b;
            b=c;
            count++;
        }
}

main()
{
    int n;
    cin>>n;
    fibo(n);
}