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
    long long int a[n],b[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]==b[i]);
        else{
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;

    return 0;

}

