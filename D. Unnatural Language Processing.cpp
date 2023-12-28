/*
 **===================================**
 **        AE Roni Ahamed             **
 **            Phitron                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
using namespace std;

char c_v(char ch)
{
    if(ch=='b'|| ch == 'c'|| ch == 'd' )
        return 'c';
    else
        return 'v';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string st="";
        cin>>n;
        cin>>st;
        for(int i=0; i<n-1; i++)
        {
            if(i + 2 == n-1 || i+ 1 == n-1)
            {
                if(n - i - 2  == 0)
                    cout<<st[i]<<st[i+1]<<endl;
                else
                    cout<<st[i]<<st[i+1]<<st[i+2];
                break;
            }
            else if(c_v(st[i])=='c' && c_v(st[i+1]) =='v' && c_v(st[i+2])=='c' && c_v(st[i+3])=='c' )
            {
                cout<<st[i]<<st[i+1]<<st[i+2]<<".";
                i += 2;
            }

            else
            {
                cout<<st[i]<<st[i+1]<<".";
                i += 1;
            }
        }
        cout<<endl;
    }
    return 0;
}

// da bab ba ba bab bab ba bab ba
