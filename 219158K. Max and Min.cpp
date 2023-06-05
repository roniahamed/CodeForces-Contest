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
    long long Min,Max;

    if(a<=b&&a<=c)
        Min = a;
    else if(a>=b&&b<=c)
        Min = b;
    else if(a>=c&&b>=c)
        Min = c;

    if(a>=b&&a>=c)
        Max = a;
    else if(a<=b&&b>=c)
        Max = b;
    else if(a<=c&&b<=c)
        Max = c;

    cout<<Min<<" "<<Max<<endl;


    return 0;
}
