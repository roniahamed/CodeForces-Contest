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
    int t;
    cin>>t;
    while(t)
    {
        long long n;
        cin>>n;
        if(n==0)
            cout<<n;
        while(n){
            cout<<n%10<<" ";
            n /= 10;
        }
        cout<<endl;
        t--;
    }

}
