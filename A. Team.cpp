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
    int count = 0;
    for(int i=0; i<n; i++)
    {
        int c = 0;
        for(int j=0; j<3; j++){
            int value;
            cin>>value;
            if (value)
                c++;
        }
        if (c >= 2)
        {
            count ++;
        }
    }
    cout<<count<<endl;

    return 0;

}


