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
    string st;
    cin>>st;
    map<char, int> m;

    int size = st.size();
    for(int i=0; i<size; i++)
    {
        m[st[i]] = 1;
    }
    size = m.size();

    if(size%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;

}


