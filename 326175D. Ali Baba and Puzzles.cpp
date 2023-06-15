/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

int main()
{
    ull a, b, c, d;
    cin>>a>>b>>c>>d;

    if(a+(b*c)==d)
        cout<<"YES\n";
    else if((a+b)*c==d)
        cout<<"YES\n";
    else if((a*b)+c==d)
        cout<<"YES\n";
    else if(a*(b+c)==d)
        cout<<"YES\n";
    else if(a-(b*c)==d)
        cout<<"YES\n";
    else if((a-b)*c==d)
        cout<<"YES\n";
    else if((a*b)-c==d)
        cout<<"YES\n";
    else if(a*(b-c)==d)
        cout<<"YES\n";
    else if(a-b+c==d)
        cout<<"YES\n";
    else if(a-b+c==d)
        cout<<"YES\n";
    else if(a+b-c==d)
        cout<<"YES\n";
    else if(a+b-c==d)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
