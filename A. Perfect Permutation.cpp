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
    int n, t=0;
    cin>>n;
    if(n%2==1)
        cout<<-1;
    else{
        for(int i=0; i<n; i++){
        if(n-i==i+1){
                t = n-i;
        }
        else{
            cout<<n-i<<" ";
        }
        }
    }
    if(t)
        cout<<t<<" ";
    cout<<endl;
    return 0;
}


