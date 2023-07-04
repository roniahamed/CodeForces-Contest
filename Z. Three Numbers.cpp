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
    int k,s,c=0;
    cin>>k>>s;
    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            if(s-i-j>=0&&s-i-j<=k)
            {
                c++;
            }
        }
    }
    cout<<c;

}

