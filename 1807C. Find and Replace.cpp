/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string  st;
    cin>>st;
    vector<int> cnt(27,-1);
    for(int i=0; i<n; i++)
    {
        int curr = st[i]-'a';
        if(cnt[curr]== -1)
            cnt[curr] = i%2;
        else
        {
            if(cnt[curr] != i%2)
            {
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    cout<<"yes"<<endl;
    return ;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        solve();
    }

}

