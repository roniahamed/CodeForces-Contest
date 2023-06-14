/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

int main()
{
    ull memo, momo, k;
    cin>>memo>>momo>>k;
    bool tem=false, temp=false;
    if(memo%k==0&&momo%k==0)
        cout<<"Both\n";
    else if(memo%k==0)
        cout<<"Memo"<<endl;
    else if(momo%k==0)
        cout<<"Momo\n";
    else
        cout<<"No One\n";

    return 0;

}

