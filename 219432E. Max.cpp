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
    ll n,i,value,maximum_value = 0;
    cin>>n;

    for(i=0; i<n; i++){
        cin>>value;
        if(maximum_value<value)
            maximum_value = value;
    }
    cout<<maximum_value<<endl;

    return  0;
}

