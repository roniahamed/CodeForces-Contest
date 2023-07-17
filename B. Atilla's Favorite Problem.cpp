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
    while(n)
    {
        n--;
        int m;
        cin>>m;
        string st;
        cin>>st;
        int max = 0;
        for(int i=0; i<m; i++)
        {
            int b = st[i] - 'a';
            b++;
            if(max<b)
                max = b;
        }
        cout<<max<<endl;
    }
}

