/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool squre(ll sum){
    if(sum >= 0)
    {
        ll num = sqrt(sum);
        if(num * num == sum)
            return true;
    }

    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll sum = 0;
        for(int i=0; i<n; i++)
        {
            ll v;
            cin>>v;
            sum += v;
        }
        if(squre(sum))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}


