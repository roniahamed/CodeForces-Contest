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
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        char f[n],s[n];
        for(int i=0; i<n; i++)
            cin>>f[i];
        for(int i=0; i<n; i++)
            cin>>s[i];
        bool t= true;
        for(int i=0; i<n; i++)
        {
            char a = f[i];
            char b = s[i];
            if(a=='G' && (b == a ||b == 'B'))
            {
                continue;
            }
           else if(a=='B' && (b == a ||b == 'G'))
            {
                continue;
            }
            else if(a=='R' && a ==b)
            {
               continue;
            }
            else{
                cout<<"NO"<<endl;
                t = false;
                break;
            }
            cout<<"\n"<<a<<" "<<b<<endl;

        }
        if(t)
            cout<<"YES"<<endl;
    }

}

