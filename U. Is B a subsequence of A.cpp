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
    int n,m;
    cin>>n>>m;
    ll arr[n],ar[m];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<m; i++)
        cin>>ar[i];

    int c=0;
    for(int i=0; i<m; i++)
    {
        bool t = true;
        for(int j=c; j<n; j++)
        {
            if(ar[i]==arr[j])
            {
                t = false;
                c = j+1;
                break;
            }
        }
        if(t)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}

