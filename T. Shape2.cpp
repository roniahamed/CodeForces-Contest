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
    int n,cnt=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n-i; j++)
            cout<<" ";
        for(int j=0; j<cnt; j++)
            cout<<"*";
        cnt+=2;
        cout<<endl;
    }
    return 0;
}
