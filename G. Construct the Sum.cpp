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
    int t;
    cin>>t;
    ll res[100005];
    while(t)
    {
        t--;
        ll n, s;
        cin>>n>>s;
        ll cou = 0;
        if(n*(n+1) / 2 < s)
        {
            cout<<-1;
        }
        else
        {
            ll sum = 0;

            for(ll z=n; z>=1; z--)
            {
                if(sum+z <= s)
                {
                    sum +=z;
                    res[cou] = z;
                    cou++;
                }
                if(sum == s)
                    break;
            }
        }
        for(ll x=0; x<cou; x++)
        {
            cout<<res[x]<<" ";
        }
        cou = 0;
        cout<<endl;
    }

}

