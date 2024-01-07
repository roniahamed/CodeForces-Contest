/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
       ll sum = a+b;
       if(sum%2==0)
        cout<<"Bob"<<endl;
       else
            cout<<"Alice"<<endl;
    }

}


