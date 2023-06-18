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

    bool check_prime = true;
    for(int i=2; i*i<=n; i++){
        if(n%i==0)
        {
            check_prime = false;
            break;
        }
    }
    if(check_prime)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;

}

