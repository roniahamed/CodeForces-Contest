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
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char s[6]="Timur",st[n];
        for(int i=0; i<n; i++)
        {
            cin>>st[i];
        }

        sort(st,st+n);
        sort(s,s+5);
        if(n==5)
        {
            bool t=true;
            for(int i=0; i<5; i++)
            {
                if(s[i]!=st[i])
                    t = false;

            }
            if(t)
                cout<<"YES\n";
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

}

