/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n][m] = {0};
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=m-1; j>= 0; j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

