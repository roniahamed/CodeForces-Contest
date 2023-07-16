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
    int n,min=INT_MAX,index;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int value;
        cin>>value;
        if(value<min)
        {
            min = value;
            index = i;
        }
    }
    cout<<min<<" "<<index<<endl;
    return 0;
}

