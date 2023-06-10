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
    long long a,b,c;
    cin>>a>>b>>c;
    if(a <= b && a <= c)
    {
        if(b<c)
            cout<<a<<endl<<b<<endl<<c<<endl;
        else
            cout<<a<<endl<<c<<endl<<b<<endl;
    }
    else if(b <= a && b <= c)
    {
        if(a < c)
            cout<<b<<endl<<a<<endl<<c<<endl;
        else
            cout<<b<<endl<<c<<endl<<a<<endl;
    }
    else
    {
        if(b<a)
            cout<<c<<endl<<b<<endl<<a<<endl;
        else
            cout<<c<<endl<<a<<endl<<b<<endl;
    }


    cout<<endl<<a<<endl<<b<<endl<<c<<endl;

}
