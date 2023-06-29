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
    while(true)
    {
        int n,m, sum=0;
        cin>>n>>m;
        if(n<= 0 || m <= 0)
            break;
        if(n>m)
            swap(n,m);
        for(int i=n; i<=m; i++)
        {
            sum += i;
            cout<<i<<" ";
        }
        cout<<"sum ="<<sum<<endl;
    }

}
