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
    ll n,sum=0;
    cin>>n;
    string st;
    cin>>st;
    for(ll i=0; i<n; i++)
    {
        sum += st[i] - '0';
    }

    cout<<sum<<endl;
}

