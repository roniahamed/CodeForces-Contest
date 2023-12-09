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
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        map<string, int> freq;
        vector<string> st[3];
        for(int j=0; j<3; j++)
        {
            st[j].resize(n);
            for(int k=0; k<n; k++)
            {
                cin>>st[j][k];
                freq[st[j][k]]++;
            }
        }
        int c[3] = {0};

        for(int j=0; j<3; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(freq[st[j][k]]==2)
                    c[j]++;
                else if(freq[st[j][k]]==1)
                    c[j] += 3;
            }
        }
        for(int j=0; j<3; j++)
            cout<<c[j]<<" ";
        cout<<endl;
    }
    return 0;
}


