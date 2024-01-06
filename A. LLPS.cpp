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
    string st, str="";
    cin>>st;
    int s = st.size();
    char c = st[0];
    for(int i=1; i<s; i++)
    {
        if(c<st[i])
            c = st[i];
    }
    for(int i=0; i<s; i++)
        {
            if(c==st[i])
                str+= st[i];
        }
    cout<<str<<endl;
    return 0;
}


