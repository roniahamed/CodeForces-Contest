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
    int t=0;
    cin>>t;
    while(t--)
    {
        char arr[3];
        for(int i=0; i<3; i++)
            cin>>arr[i];
        if(arr[0]=='b' && arr[1]=='c')
            cout<<"NO"<<endl;
        else if(arr[0]=='c' && arr[1]=='a')
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }

}


