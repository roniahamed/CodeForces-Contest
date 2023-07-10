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
    long long l,r,sum=0;

    while(t){
        t--;
        cin>>l>>r;
        if(l>r)
            swap(l,r);
        sum = r*(r+1)/2 - l*(l+1)/2 + l;
        cout<<sum<<endl;
    }
    return 0;
}

