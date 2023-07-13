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
    long long x = 0;
    for(int i=0; i<n; i++)
    {
        long long value;
        cin>>value;
        ve.push_back(value);
    }
    cin>>x;

    for(int i=0; i<n; i++)
    {
        if(ve[i]==x){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
return 0;

}
