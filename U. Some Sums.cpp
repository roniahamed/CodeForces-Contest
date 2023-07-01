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
    int n, a, b;
    cin>>n>>a>>b;
    long long sum=0;
    for(int i=1; i<=n; i++)
    {
        int s = i, m = 0;
        while(s>0)
        {
            m += s%10;
            s/=10;
        }
        if(m >= a && b >= m)
            sum += i;
    }

    cout<<sum<<endl;

    return 0;
}

