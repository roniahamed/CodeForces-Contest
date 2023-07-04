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
    int n,fibonacci=1,f1=0,f2=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            cout<<f1<<" ";
            continue;
        }
        if(i==2)
        {
            cout<<f2<<" ";
            continue;
        }

        fibonacci = f1 + f2;
        f1 = f2;
        f2 = fibonacci;
        cout<<fibonacci<<" ";
    }
    return 0;
}

