#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long x[3];
        long long y[3];
        for(int j=0; j<3; j++)
        {
            cin>>x[j]>>y[j];
        }
        sort(x,x+3);
        sort(y,y+3);
        bool is_ok = false;
        if(x[0]!=x[1]&&x[0]!=x[2]&&x[1]!=x[2])
        {
            is_ok = true;
        }
        if(y[0]!=y[1]&&y[0]!=y[2]&&y[1]!=y[2])
            is_ok = true;

        if(is_ok)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}

