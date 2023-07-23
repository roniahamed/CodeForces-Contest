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
    long long  n;
    cin>>n;
    long long a=0,b=1, sum=0;

    for(long long  i=2; i<=n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout<<a<<endl;

    return 0;
}

