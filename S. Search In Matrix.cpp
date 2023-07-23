/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int array[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>array[i][j];
        }
    }
    int value;
    cin>>value;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(value==array[i][j])
            {
                cout<<"will not take number"<<endl;
                return 0;
            }
        }
    }

    cout<<"will take number"<<endl;
    return 0;
}

