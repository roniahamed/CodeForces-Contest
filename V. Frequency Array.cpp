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
    long long n,m;
    cin>>n>>m;
    long long arr[m+1] = {0};
    for(int i=0; i<n; i++)
    {
        long long value;
        cin>>value;
        arr[value]++;
    }
    for(int i=1; i<=m; i++)
        cout<<arr[i]<<endl;


}

