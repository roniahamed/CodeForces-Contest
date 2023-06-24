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
    char s;
    cin>>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int value;
        cin>>value;
        for(int j=0; j<value; j++)
            cout<<s;
        cout<<endl;
    }

    return 0;

}

