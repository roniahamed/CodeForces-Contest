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
    vector<long long> ve;
    long long value;
    for(int i=0; i<n; i++)
    {
        cin>>value;
        ve.push_back(value);
    }

    for(int i=n-1; i>=0; i--)
    {
        cout<<ve[i]<<" ";
    }
    cout<<endl;
    return 0;
}

