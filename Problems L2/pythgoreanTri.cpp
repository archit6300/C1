#include <iostream>
using namespace std;

void pyth(int a, int b, int c)
    {
        int mA,mB,mC;
        if(a>b)
            {
                if(a>c)
                    {
                        mA=a;
                        if(b>c)
                            {
                                mB=b;
                                mC=c;
                            }
                        else
                            {
                                mB=c;
                                mC=b;
                            }
                    }
                else
                    {
                        mA=c;
                        mB=a;
                        mC=b;
                    }
            }
        else if(b>a)
            {
                if(b>c)
                    {
                        mA=b;
                        if(a>c)
                            {
                                mB=a;
                                mC=c;
                            }
                        else
                            {
                                mB=c;
                                mC=a;
                            }
                    }
                else
                    {
                        mA=c;
                        mB=b;
                        mC=a;
                    }
            }
        cout<<mA<<" "<<mB<<" "<<mC<<endl;
        if(mA*mA==((mB*mB)+(mC*mC)))
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
    }
main()
    {
        int x,y,z;
        cin>>x>>y>>z;
        pyth(x,y,z);
    }