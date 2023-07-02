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
    int n,p=1;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cout<<p<<" ";
            p++;
        }
        cout<<"PUM\n";
        p++;
    }

    return 0;

}
