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
ll smallest(ll arr[], int n)
{   ll small = LLONG_MAX;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            ll result = arr[i] + arr[j] + j - i;
            if(result<small)
                small = result;
        }
    }
    return small;
}
int main()
{
    int t,n;
    cin>>t;
    while(t)
    {
        t--;
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            ll value;
            cin>>value;
            arr[i] = value;
        }
        ll result = smallest(arr,n);
        cout<<result<<endl;
    }
    return 0;
}

