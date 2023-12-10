/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    vector<ll> a(4);
    map<long long int,long long int> freq;

    for(int i=0; i<4; i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
   int si = freq.size();
   cout<<4-si<<endl;

    return 0;

}


