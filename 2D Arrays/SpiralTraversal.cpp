#include <bits/stdc++.h>
using namespace std;

main()
{
    int m,n;
    cin>>n>>m;

    int a[n][m];

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
        }

    int rowS=0 , rowE=n-1 , colS=0 , colE=m-1;

    while(rowS<= rowE && colS<=colE)
        {
            //for row start
            for(int col=colS ; col<=colE ; col++)
                cout<<a[rowS][col]<<" ";
            rowS++;
            //for col end
            for(int row=rowS;row<=rowE;row++)
                cout<<a[row][colE]<<" ";
            colE--;
            //for row end
            for(int col=colE;col>=colS;col--)
                cout<<a[rowE][col]<<" ";
            rowE--;
            //for col start
            for(int row=rowE;row>=rowS;row--)
                cout<<a[row][colS]<<" ";
            colS++;
        }
}