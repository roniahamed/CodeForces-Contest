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
    int n, num1, num2;
    cin>>n;

    num1 = n%10;
    n /= 10;
    num2 = n;

    if(num1 % num2 == 0 || num2 % num1 == 0)
        cout<<"YES\n";
    else
    cout<<"NO\n";

    return 0;
}

