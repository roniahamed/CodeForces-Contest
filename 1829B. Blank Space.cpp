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
        int n,value,k=0;
        cin>>n;
        vector<int> cnt;

        for(int j=0; j<n; j++)
        {
            cin>>value;
            if(value)
            {
                cnt.push_back(k);
                k=0;
            }
            else
            {
                k++;

            }
        }
        cnt.push_back(k);
        cout<<*max_element(cnt.begin(),cnt.end())<<endl;
    }
    return 0;

}

