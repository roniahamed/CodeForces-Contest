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
    long long sum = 0,value = 0;
    for(int i=0; i<n; i++)
    {
        cin>>value;
        sum += value;
    }
    cout<<abs(sum)<<endl;
    return 0;
}

