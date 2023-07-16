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
    int n;
    cin>>n;
    long long value;
    vector<long long> ve;
    for(int i=0; i<n; i++)
    {
        cin>>value;
        ve.push_back(value);
    }
    for(int i=0, j=n-1; i<j; i++,j--)
    {
        if(ve[i]!=ve[j])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

