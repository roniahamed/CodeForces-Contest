/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, factorial=1;
    cin>>n;
    for(int j=0; j<n; j++){
            int m;
    cin>>m;
    for(int i=1; i<=m; i++){

        factorial *= i;
    }
    cout<<factorial<<endl;
    factorial = 1;
    }

    return 0;
}

