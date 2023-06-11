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
    long long l1, l2, r1, r2;
    cin>>l1>>l2>>r1>>r2;

    if(l2<r1 || l1>r2)
        cout<<-1<<endl;
    else
    {
        if(l2<r2)
        {
            if(r1>l1)
                cout<<r1<<" "<<l2<<endl;
            else
                cout<<l1<<" "<<l2<<endl;
        }

        else
        {
            if(r1>l1)
                cout<<r1<<" "<<r2<<endl;
            else
                cout<<l1<<" "<<r2<<endl;
        }
    }

    return 0;

}
