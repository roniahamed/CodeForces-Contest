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
    int n,c=2;
    cin>>n;
    for(int i=0; i<n/2; i++)
    {
        for(int j=0; j< i; j++ )
            cout<<"*";
        cout<<"\\";
        for(int j=0; j<n-c; j++)
            cout<<"*";
        cout<<"/";
        for(int j=0; j< i; j++ )
            cout<<"*";
        cout<<endl;
        c+=2;
    }
    for(int i=0; i<n; i++)
    {
        if(i==n/2)
        {
            cout<<"X";
            continue;
        }
        cout<<"*";
    }
    c-=2;
    cout<<endl;
    for(int i=n/2-1; i>=0; i--)
    {
        for(int j=0; j< i; j++ )
            cout<<"*";
        cout<<"/";
        for(int j=0; j<n-c; j++)
            cout<<"*";
        cout<<"\\";
        for(int j=0; j< i; j++ )
            cout<<"*";
        cout<<endl;
        c-=2;
    }
    cout<<endl;

}

