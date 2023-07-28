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
    int n,c;
    cin>>n;
    c = n-1;
    int arr[n][n];
    long long min=0, max=0;
    for(int i=0; i<n; i++ )
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
            if(i==j)
                min += arr[i][j];
            if(j==c)
                max += arr[i][j];

        }
        c--;
    }
    cout<<abs(min-max)<<endl;

}

