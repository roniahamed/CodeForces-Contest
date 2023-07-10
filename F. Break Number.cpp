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
    long long c = 0;
    while(n)
    {
        n--;
        long long value, cn = 0;
        cin>>value;
        while(value %2 == 0)
        {
            value /= 2;
            cn++;
        }
        if(cn>c)
            c = cn;
    }
    cout<<c<<endl;
    return 0;
}

