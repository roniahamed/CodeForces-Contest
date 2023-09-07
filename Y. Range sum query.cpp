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
    int n,q;
    cin>>n>>q;
    ll arr[n+2];
    ll ar[n+2] = {0};
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        ar[i] = arr[i] + ar[i-1];
    }

    for(int i=0; i<q; i++)
    {
        int a, b;
        ll sum = 0;
        cin>>a>>b;
        cout<<ar[b] - ar[a-1]<<endl;
    }
    return 0;
}

