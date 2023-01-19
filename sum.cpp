#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n = 0 ;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b == c)
            cout<<"yes\n";
        else if(a+c == b)
            cout<<"yes\n";
        else if(b+c == a)
            cout<<"yes\n";
        else
            cout<<"NO\n";
    }
    return 0;

}
