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
        string st;
        cin>>st;
        int p=0,m=0;
        for(int i=0; i<n; i++)
        {
            if(st[i]=='-')
                m ++;
            else
                    p ++;
        }
        cout<<abs(p-m)<<endl;
    }

}


