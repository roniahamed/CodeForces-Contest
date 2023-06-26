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
    while(t)
    {
        string st;
        cin>>n>>st;
        map<string,int> ma;
        int con = 0;
        for(int i=0; i<n-1; i++)
        {
            string s ;
            s += st[i];
            s += st[i+1];
            ma.insert({s,0});
        }
        cout<<ma.size()<<endl;

        t--;
    }

}

