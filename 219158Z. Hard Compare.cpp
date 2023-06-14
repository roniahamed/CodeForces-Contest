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
    long long A,B,C,D;
    cin>>A>>B>>C>>D;

    if(B * log(A) > D * log(C))
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;

}

