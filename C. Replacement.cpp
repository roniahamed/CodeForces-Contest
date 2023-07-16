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
    for(int i=0; i<n; i++){
        long long value;
        cin>>value;
        if(value>0)
            cout<<1<<" ";
        else if(value<0)
            cout<<2<<" ";
        else if(value==0)
            cout<<0<<" ";
    }

    return 0;

}

