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
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int odd=0,even=0;
        for(int k=0; k<n; k++)
        {
            int value;
            cin>>value;
            if(value%2==0)
                even += value;
            else
                odd += value;
        }
        if(even>odd)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;

}
