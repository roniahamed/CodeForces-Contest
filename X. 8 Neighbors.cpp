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
    int n,m,x,y;
    cin>>n>>m;
    char st[n+1][m+1];
    for(int i=1; i<=n;  i++)
    {
        for(int j=1; j<=m; j++)
            cin>>st[i][j];
    }
    cin>>x>>y;
    if(st[x][y-1] != '.' &&
       st[x][y+1] != '.' &&
       st[x-1][y] != '.' &&
       st[x+1][y] != '.' &&
       st[x-1][y-1] != '.' &&
       st[x-1][y+1] != '.' &&
       st[x+1][y-1] != '.' &&
       st[x+1][y+1] != '.'){
                cout<<"yes"<<endl;
       }
    else{
        cout<<"no"<<endl;
    }

        return 0;
}

