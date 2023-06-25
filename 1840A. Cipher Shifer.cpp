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
    string s,s1;
    for(int i=0;  i<t; i++)
    {
        int n;
        cin>>n>>s;
        for(int j=0; j<n; j++)
        {
            s1 += s[j];
            for(int k=j + 1; k < n; k++)
            {
                if(s[k] == s[j])
                {
                    j = k;
                    break;
                }
            }
        }
        cout<<s1<<endl;
        s1 = "";
    }
    return 0;

}

