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
    int n,m=1;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++)
            cout<<" ";
        for(int j=0; j<m; j++)
            cout<<'*';
        cout<<endl;
        m+=2;
    }
    m-=2;
    for(int i=n; i>=1; i--){
        for(int j=0; j<n-i; j++)
            cout<<" ";
        for(int j=0; j<m; j++)
            cout<<'*';
        cout<<endl;
        m-=2;
    }


}

